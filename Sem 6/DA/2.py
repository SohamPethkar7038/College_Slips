import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression


# Dataset
X = np.array([[1], [2], [3], [4], [5]])  # Independent variable
y = np.array([30000, 35000, 40000, 45000, 50000])  # Target variable


# Splitting data (80% train, 20% test)
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)


# Training model
model = LinearRegression().fit(X_train, y_train)


# Predictions
y_pred = model.predict(X_test)


# Output
print("Training Data:\n", X_train, y_train)
print("\nTesting Data:\n", X_test, y_test)
print("\nPredicted Salaries:\n", y_pred)
print("\nCoefficient:", model.coef_[0])
print("Intercept:", model.intercept_)
