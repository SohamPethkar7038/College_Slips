from sklearn.linear_model import LogisticRegression

X = [[50], [60], [70], [80], [90]]
y = [0, 0, 1, 1, 1]  # 1: Pass, 0: Fail

model = LogisticRegression().fit(X, y)
print(f"Prediction for Score 75: {model.predict([[75]])}")
