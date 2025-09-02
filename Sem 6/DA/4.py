import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression


# Load dataset
df = pd.read_csv('fish.csv')


# Define independent & target variable
X, y = df[['Length1']], df['Weight']


# Split data
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)


# Train model
model = LinearRegression().fit(X_train, y_train)


# Predict
y_pred = model.predict(X_test)


# Plot results
plt.scatter(X_test, y_test, color='blue', label='Actual')
plt.plot(X_test, y_pred, color='red', label='Predicted')
plt.xlabel('Length1')
plt.ylabel('Weight')
plt.legend()
plt.show()


