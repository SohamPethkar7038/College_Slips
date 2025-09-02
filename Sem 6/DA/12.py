import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression

# Create dataset
data = {'Height': [160, 165, 170, 175, 180], 'Weight': [60, 65, 70, 75, 80]}
df = pd.DataFrame(data)

# Split into train & test sets
X_train, X_test, y_train, y_test = train_test_split(df[['Height']], df['Weight'], test_size=0.2)

# Train model
model = LinearRegression()
model.fit(X_train, y_train)

print(f"Model Coefficients: {model.coef_}, Intercept: {model.intercept_}")
1