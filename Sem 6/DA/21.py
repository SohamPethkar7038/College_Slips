import numpy as np
X = np.array([1, 2, 3, 4, 5]).reshape(-1, 1)
y = np.array([10, 20, 30, 40, 50])
model = LinearRegression().fit(X, y)
print(f"Predictions: {model.predict(X)}")
