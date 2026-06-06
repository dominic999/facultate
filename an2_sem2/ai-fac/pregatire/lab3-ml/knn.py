import numpy as np
import matplotlib.pyplot as plt

class KnnClassifier:
    def __init__(self, train_images, train_labels):
        self.train_images = train_images
        self.train_labels = train_labels

    def classify_image(self, test_image, num_neighbors = 9, metric = 'l2'):
        distances = []

        for idx, image in enumerate(self.train_images):
            dist = 0
            if metric == 'l2':
                dist = self.eucliadian(test_image, image)
            else: 
                dist = self.manhattan(test_image, image)
            # distances.append((dist, self.train_labels[idx]))
            distances.append(dist)

        # distances.sort()
        # labels = [label for dist, label in distances[:num_neighbors]]
        labels = self.train_labels[np.argsort(distances)][:num_neighbors].astype(int)
        pred = np.argmax(np.bincount(labels))
        return pred

    def manhattan(self, image1, image2):
        return np.sum(np.abs(image1 - image2))

    def eucliadian(self, image1, image2):
        return np.sum((image1 - image2) ** 2)

train_images = np.loadtxt('data/train_images.txt')
test_images = np.loadtxt('data/test_images.txt')

train_labels = np.loadtxt('data/train_labels.txt')
test_labels = np.loadtxt('data/test_labels.txt')

classifier = KnnClassifier(train_images, train_labels)

tests = [1,3,5,7,9]

correct = { 
        "l1": [0 for _ in tests],
        "l2": [0 for _ in tests] 
        }

distances = ['l1', 'l2']
for distance in distances:
    for i, test in enumerate(tests):
        for idx, image in enumerate(test_images):
            clasa = classifier.classify_image(image, 
                    num_neighbors=test, metric=distance)
            if clasa == test_labels[idx]:
                correct[distance][i] += 1


acc = {
        "l1" : [i / 500 for i in correct["l1"]],
        "l2" : [i / 500 for i in correct["l2"]]
        }
print(acc)
plt.plot(tests, acc["l1"])
plt.plot(tests, acc["l2"])
plt.show()
plt.xlabel("Number of neighbors")
plt.ylabel("Accuracy")
print(acc)

