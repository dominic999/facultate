import enum
from heapq import nsmallest
from sklearn.utils import shuffle
import matplotlib.pyplot as plt
import numpy as np

class Perceptron:
    def __init__ (self, input_data_length, median, dev):
        # self.w = np.random.normal(median, dev, (input_data_length))
        self.w = np.zeros((input_data_length))
        self.b = 0

    def forward(self, input_data):
        a = self.w @ input_data + self.b
        return a

    def loss(self, pred, expected):
        l = (pred - expected) ** 2 / 2
        return l
    
    def backward(self, loss, pred, expected, data):
        w_d = (pred - expected) * data

def compute_y(x, W, bias):
    # dreapta de decizie
    # [x, y] * [W[0], W[1]] + b = 0
    return (-x * W[0] - bias) / (W[1] + 1e-10)

def plot_decision_boundary(X, y , W, b, current_x, current_y):
    x1 = -0.5
    y1 = compute_y(x1, W, b)
    x2 = 0.5
    y2 = compute_y(x2, W, b)
    # sterge continutul ferestrei
    plt.clf()
    # ploteaza multimea de antrenare
    color = 'r'
    if(current_y == -1):
        color = 'b'
    plt.ylim((-1, 2))
    plt.xlim((-1, 2))
    plt.plot(X[y == -1, 0], X[y == -1, 1], 'b+')
    plt.plot(X[y == 1, 0], X[y == 1, 1], 'r+')
    # ploteaza exemplul curent
    plt.plot(current_x[0], current_x[1], color+'s')
    # afisarea dreptei de decizie
    plt.plot([x1, x2] ,[y1, y2], 'black')
    plt.show(block=False)
    plt.pause(0.3)



train_data = np.array([[0, 0], [0, 1], [1, 0], [1, 1]])
train_labels = np.array([-1, 1, 1, 1])

epochs = 70
e = 0.1

w = np.zeros((2))
b = 0

for i in range(epochs):
    y_hat = None
    y = None
    x, labels = shuffle(train_data, train_labels, random_state=0)
    for idx,data in enumerate(x):
        y_hat = data @ w + b
        y = labels[idx]
        loss = (y_hat - y) ** 2 / 2
        w = w - e * (y_hat - y) * data
        b = b - e * (y_hat - y)
        plot_decision_boundary(x, train_labels, w, b, data, y)

    preds = train_data @ w + b
    acc = np.mean(np.round(preds) == train_labels)
    print(f"Epoch {i}: {acc}")
