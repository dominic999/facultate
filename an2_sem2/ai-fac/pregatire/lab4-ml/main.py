import numpy as np
from sklearn.metrics import accuracy_score, f1_score
from sklearn import preprocessing, svm

np.set_printoptions(threshold=np.inf)

class BagOfWords:
    def __init__(self):
        self.v = {}

    def build_vocabulary(self, data):
        word_list = []
        id = 1
        for sentence in data:
            for word in sentence:
                if word not in word_list:
                    word_list.append(word)
                    self.v[word] = id
                    id += 1
        return word_list

    def get_features(self, data):
        matrice = np.zeros((len(data), len(self.v.keys())))
        for idx, sent in enumerate(data):
            for word in sent:
                if word in self.v:
                    matrice[idx][self.v[word]-1] += 1
        return matrice



scaler = preprocessing.StandardScaler()

def normalize_data(train_data, test_data, type = "standard"):
    scaled_x_test, scaled_x_train = None, None

    if type == "standard":
        scaler.fit(train_data)
        scaled_x_train = scaler.transform(train_data)
        scaled_x_test = scaler.transform(test_data)

    if type == "l1":
        s = np.sum(np.abs(train_data), axis = 1, keepdims=True)
        s[s == 0] = 1
        scaled_x_train = train_data / s

        s = np.sum(test_data, axis = 1, keepdims=True)
        s[s == 0] = 1
        scaled_x_test = test_data / s

    if type == "l2":
        s = np.sqrt(np.sum(train_data**2, axis = 1, keepdims=True))
        s[s == 0] = 1
        scaled_x_train = train_data / s

        s = np.sqrt(np.sum(test_data**2, axis = 1, keepdims=True))
        s[s == 0] = 1
        scaled_x_test = test_data / s
    
    return scaled_x_train, scaled_x_test


train_data = np.load("data-lab4/training_sentences.npy", allow_pickle=True)
test_data = np.load("data-lab4/test_sentences.npy", allow_pickle=True)

train_labels = np.load("data-lab4/training_labels.npy", allow_pickle=True)
test_labels = np.load("data-lab4/test_labels.npy", allow_pickle=True)

bow = BagOfWords()
word_list = bow.build_vocabulary(train_data)

train_features = bow.get_features(train_data)
test_features = bow.get_features(test_data)
normalized_train, normalized_test = normalize_data(train_features, test_features, "l2")

model = svm.SVC(C=1, kernel="linear")
model.fit(normalized_train, train_labels)
preds = model.predict(normalized_test)

print("Acc: ", accuracy_score(test_labels, preds))
print("F1-score: ", f1_score(test_labels, preds))

coef = model.coef_[0]
words = np.array(word_list)

idx_pos = np.argsort(coef)[:10]
idx_neg = np.argsort(coef)[-10:]

print("Most negative: ", words[idx_neg])
print("Most positive: ", words[idx_pos])
