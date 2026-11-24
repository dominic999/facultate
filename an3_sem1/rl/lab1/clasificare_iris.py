from sklearn.datasets import load_iris
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.neighbors import KNeighborsClassifier
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score, classification_report

data = load_iris()
x, y = data.data, data.target

# Pregătire date (split asupra setului de date + normalizare date - media datelor devine 0, iar deviația standard devine 1)
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.2)
sc = StandardScaler()
x_train_scaled = sc.fit_transform(x_train)
x_test_scaled = sc.transform(x_test)

results = []
no_neihbours = [3,5,7]
acc = []
# KNN
for n in no_neihbours:
    knn = KNeighborsClassifier(n_neighbors=n)
    knn.fit(x_train_scaled, y_train)
    y_pred_knn = knn.predict(x_test_scaled)
    curr_acc = accuracy_score(y_test, y_pred_knn)
    print('KNN acc:', curr_acc)
    acc.append(curr_acc)

plt.plot(acc, no_neihbours, 'ro')
plt.xlabel("accuray")
plt.ylabel("no_neihbours")
plt.show()

# Regresie logistică
no_iterations = [1000, 5000, 1000]
reg_acc = []
for iter in no_iterations:
    lr = LogisticRegression(max_iter=iter)
    lr.fit(x_train_scaled, y_train)
    y_pred_lr = lr.predict(x_test_scaled)
    curr_acc = accuracy_score(y_test, y_pred_lr)
    reg_acc.append(curr_acc)
    print('LogReg acc:', curr_acc)
    print('\nReport (LR):\n', classification_report(y_test, y_pred_lr))

plt.plot(reg_acc, no_iterations)
plt.xlabel("acc")
plt.ylabel("no_iter")
plt.show()


