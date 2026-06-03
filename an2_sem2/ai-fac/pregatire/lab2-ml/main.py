import numpy as np
import matplotlib.pyplot as plt
from sklearn.naive_bayes import MultinomialNB

def confusion_matrix(y_true, y_pred):
    matrice = np.zeros((10,10))
    for idx, pred in enumerate(y_pred):
        matrice[y_true[idx]-1][int(pred)-1] += 1
    return matrice

naive_bayes_model = MultinomialNB()

train_images = np.loadtxt("data/train_images.txt")
train_labels = np.loadtxt("data/train_labels.txt").astype(np.int32)

test_images = np.loadtxt("data/test_images.txt")
test_labels = np.loadtxt("data/test_labels.txt").astype(np.int32)

nr_bins = 11

bins = np.linspace(start=0, stop=255, num=nr_bins)
train_images = np.digitize(train_images, bins)
test_images = np.digitize(test_images, bins)

naive_bayes_model.fit(train_images, train_labels)
y_pred = naive_bayes_model.predict(test_images)

print(naive_bayes_model.score(test_images, test_labels))

# counter = 0
# for i, pred in enumerate(y_pred):
#     if counter == 10:
#         break
#     if test_labels[i] != pred:
#         counter += 1
#         image = np.reshape(test_images[i], (28, 28))
#         plt.imshow(image.astype(np.uint8), cmap='gray')
#         plt.show()


mat = confusion_matrix(test_labels, y_pred)
print(mat)
