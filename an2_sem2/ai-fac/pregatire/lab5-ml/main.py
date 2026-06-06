from heapq import nsmallest
import numpy as np
from sklearn.utils import shuffle
from sklearn.preprocessing import StandardScaler
from sklearn.linear_model import LinearRegression, Ridge, Lasso
from sklearn.metrics import mean_squared_error, mean_absolute_error
from sklearn.model_selection import KFold

scaler = StandardScaler()
linear_regression_model = LinearRegression()
ridge_regression_model = Ridge(alpha=1)
lasso_regression_model = Lasso(alpha=1)

def normalize_data(train, test):
    training_data = scaler.fit_transform(train)
    test_data = scaler.fit_transform(test)
    return training_data, test_data


training_data = np.load('data_lab5_ml/training_data.npy')
prices = np.load('data_lab5_ml/prices.npy')
# print('The first 4 samples are:\n ', training_data[:4])
# print('The first 4 prices are:\n ', prices[:4])
# shuffle
training_data, prices = shuffle(training_data, prices, random_state=0)

mse = np.array([])
mae = np.array([])

kf = KFold(n_splits=3)

# for train_idx, test_idx in kf.split(training_data):
#     train_fold, test_fold = normalize_data(training_data[train_idx], training_data[test_idx])
#     training_prices = prices[train_idx]
#     test_prices = prices[test_idx]
#     ridge_regression_model.fit(train_fold, training_prices)
#     preds = ridge_regression_model.predict(test_fold)
#     mse = np.append(mse, mean_squared_error(test_prices, preds))
#     mae = np.append(mae, mean_absolute_error(test_prices, preds))


# print("Avg mse: " ,np.sum(mse) / len(mse))
# print("Avg mae:", np.sum(mae) / len(mae))

training_data = scaler.fit_transform(training_data)
ridge_regression_model.fit(training_data, prices)

feature_names = [
    "an fabricatie",
    "kilometri",
    "mileage",
    "motor",
    "putere",
    "numar locuri",
    "numar proprietari",
    "fuel 1",
    "fuel 2",
    "fuel 3",
    "fuel 4",
    "fuel 5",
    "manual",
    "automatic"
]

coefs = ridge_regression_model.coef_

importance = np.abs(coefs)

idx_sorted = np.argsort(importance)

least_important = idx_sorted[0]
most_important = idx_sorted[-1]
second_most_important = idx_sorted[-2]

print("Cel mai semnificativ:", feature_names[most_important], coefs[most_important])
print("Al doilea cel mai semnificativ:", feature_names[second_most_important], coefs[second_most_important])
print("Cel mai puțin semnificativ:", feature_names[least_important], coefs[least_important])
