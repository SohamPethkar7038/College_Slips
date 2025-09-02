import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression

# Load dataset (Assuming 'nursery.csv' is downloaded)
df = pd.read_csv("nursery.csv")

# Convert categorical to numeric
df = pd.get_dummies(df)

# Define independent and target variables
X = df.drop(columns=['target_column'])  # Replace with actual target column
y = df['target_column']

# Split and train model
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2)
model = LinearRegression().fit(X_train, y_train)

print(f"Predictions: {model.predict(X_test)}")
1