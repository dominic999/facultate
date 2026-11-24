import pandas as pd
from sklearn.model_selection import train_test_split
import matplotlib.pyplot as plt
import seaborn as sns
from sklearn.datasets import fetch_california_housing
from sklearn.datasets import fetch_california_housing
from sklearn.ensemble import RandomForestRegressor
from sklearn.linear_model import LinearRegression, LogisticRegression
from sklearn.metrics import mean_absolute_error, r2_score
from sklearn.preprocessing import StandardScaler

# Încărcăm dataset-ul sub formă de DataFrame (adică o matrice mai specială / tabel Excel)
cal = fetch_california_housing(as_frame=True)
df = cal.frame
df.head()

# DISTRIBUȚIA VALORILOR LOCUINȚELOR

plt.figure(figsize=(7,4))
sns.histplot(df["MedHouseVal"], bins=50, kde=True, color="steelblue")
plt.title("Distribuția valorii medii a locuințelor")
plt.xlabel("Valoare medie (sute de mii $)")
plt.ylabel("Frecvență")
plt.show()

# DISTRIBUȚIA VALORILOR LOCUINȚELOR

plt.figure(figsize=(7,4))
sns.histplot(df["MedHouseVal"], bins=50, kde=True, color="steelblue")
plt.title("Distribuția valorii medii a locuințelor")
plt.xlabel("Valoare medie (sute de mii $)")
plt.ylabel("Frecvență")
plt.show()

# HARTĂ. FOLOSIȚI HARTA CALIFORNIEI ÎN LATERAL.

plt.figure(figsize=(8,6))
plt.scatter(
    df["Longitude"], df["Latitude"],
    c=df["MedHouseVal"], cmap="viridis",
    s=8, alpha=0.7
)
plt.colorbar(label="Valoare medie (sute de mii $)")
plt.title("Distribuția geografică a valorii locuințelor în California")
plt.xlabel("Longitude")
plt.ylabel("Latitude")
plt.show()


# CORELAȚIE ÎNTRE VARIABILE

plt.figure(figsize=(8,6))
sns.heatmap(df.corr(numeric_only=True), cmap="coolwarm", annot=True, fmt=".2f")
plt.title("Matricea de corelație a caracteristicilor")
plt.show()



x, y = fetch_california_housing(return_X_y=True)
# De ce random_state=42???
x_train, x_test, y_train, y_test = train_test_split(x, y, test_size=0.2, random_state=42)

# Random Forest
# Iar 42? Număr magic?

sc = StandardScaler()
x_train_scaled = sc.fit_transform(x_train)
x_test_scaled = sc.transform(x_test)



rf = RandomForestRegressor(n_estimators=200, random_state=42, n_jobs=-1).fit(x_train, y_train)
lr = LinearRegression().fit(x_train_scaled, y_train)
pred_lr = lr.predict(x_test_scaled)
pred_rf = rf.predict(x_test)

# Ce inseamna mean absolute error / R2 score?
print('MAE-lr:', mean_absolute_error(y_test, pred_lr))
print('R2-lr:', r2_score(y_test, pred_lr))
print('MAE-rf:', mean_absolute_error(y_test, pred_rf))
print('R2-rf:', r2_score(y_test, pred_rf))

