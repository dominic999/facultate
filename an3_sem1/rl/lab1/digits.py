from sklearn.datasets import load_digits
import matplotlib.pyplot as plt
from sklearn.svm import SVC
from sklearn.metrics import accuracy_score
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler

digits = load_digits()
x, y = digits.data, digits.target

x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.2)

sc = StandardScaler()
# x_train_scaled = sc.fit_transform(x_train)
# x_test_scaled = sc.transform(x_test)

x_train_scaled = x_train
x_test_scaled = x_test

# SVC
grids = [0.1, 1, 3, 10]
accuracies = []
for grid in grids:
    svm = SVC(kernel='rbf', gamma='scale', C=grid).fit(x_train_scaled, y_train)
    acc = accuracy_score(y_test, svm.predict(x_test_scaled))
    accuracies.append(acc)
    print('SVM acc:', acc)
plt.plot(grids, accuracies)
plt.xlabel("grids")
plt.ylabel("accuracies")
plt.show()

