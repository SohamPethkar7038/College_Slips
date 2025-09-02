import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score


df = pd.read_csv('iris.csv')


print(df.groupby('species').describe())  # Basic stats


X, y = df.drop(columns=['species']), df['species']
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)


model = LogisticRegression(max_iter=500).fit(X_train, y_train)


print("Model Accuracy:", accuracy_score(y_test, model.predict(X_test)))