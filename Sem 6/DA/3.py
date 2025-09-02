import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score


data = pd.DataFrame({'Gender': [0, 1, 0, 1, 0],
                     'Age': [25, 30, 35, 40, 45],
                     'Salary': [50000, 60000, 70000, 80000, 90000],
                     'Purchased': [0, 1, 0, 1, 0]})


X = data.drop('Purchased', axis=1)
y = data['Purchased']


X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)


scaler = StandardScaler()
X_train = scaler.fit_transform(X_train)
X_test = scaler.transform(X_test)


model = LogisticRegression()
model.fit(X_train, y_train)


y_pred = model.predict(X_test)


accuracy = accuracy_score(y_test, y_pred)


print("Accuracy:", accuracy)
