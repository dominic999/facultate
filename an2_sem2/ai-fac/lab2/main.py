from sklearn.naive_bayes import MultinomialNB
import matplotlib.pyplot as plt
import numpy as np
naive_bayes_model = MultinomialNB()
#ex 1
# F = 'fata'
# B = 'baiat'
# train_data = [(160, F), (165, F), (155, F), (172, F), (175, B), (180, B), (177, B), (190, B)]
# intervala = {
#         "150-160": [(160, F), (155,F)],
#         "161-170": [(165, F)],
#         "171-180": [(180, B), (177, B),(172, F), (175, B)],
#         "181-190": [(190, B)]
#         }
#
# p_sex = 1/2
# p_178 = 1/4
#
# p_baiat_178 = (3/8)/(1/2)
# p_fata_178 = (1/8)/(1/2)
# print(p_baiat_178)
# print(p_fata_178)


#ex2

def values_to_bins(matrice_initiala, bins):
    x_to_bins = np.digitize(matrice_initiala, bins) 
    return x_to_bins

def conf_matrix(y_pred, y_true):
    confusion_matrix = [[0 for j in range(10)] for i in range(10)]
    for i in range(len(y_pred)):
        confusion_matrix[y_true[i]][y_pred[i]] += 1
    return confusion_matrix


num_bins = 11
train_images = np.loadtxt('train_images.txt') # incarcam imaginile
test_images = np.loadtxt('test_images.txt') # incarcam imaginile
train_labels = np.loadtxt('train_labels.txt') # incarcam imaginile
test_labels = np.loadtxt('test_labels.txt') # incarcam imaginile
# tipul de date int
bins = np.linspace(start=0, stop=255, num=num_bins+1) # returneaza intervalele

train_disc = values_to_bins(train_images, bins)
test_disc = values_to_bins(test_images, bins)
naive_bayes_model = MultinomialNB()
naive_bayes_model.fit(train_disc, train_labels)
prediction = naive_bayes_model.predict(test_disc)
print(prediction)

sum = 0
# for i in range(0,500):
#     if sum == 10:
#         break
#     if(prediction[i] != test_labels[i]):
#         image = test_images[i, :]
#         image = np.reshape(image, (28, 28))
#         plt.imshow(image.astype(np.uint8), cmap='gray')
#         plt.axis("off")
#         plt.savefig("plot" + str(sum) +".png", dpi=200, bbox_inches="tight", pad_inches=0)
#         plt.close()
#         sum+=1

print(conf_matrix(prediction, test_disc))
# print(naive_bayes_model.score(test_disc, test_labels))
# print(np.min(train_disc))
# print(np.max(train_disc))
# print(train_disc.shape)
# x_to_bins = np.digitize(x, bins) 
