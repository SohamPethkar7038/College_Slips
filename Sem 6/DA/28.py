data = {'Year': [2010, 2012, 2014, 2016, 2018], 'Price': [200000, 300000, 400000, 500000, 600000]}
df = pd.DataFrame(data)

X_train, X_test, y_train, y_test = train_test_split(df[['Year']], df['Price'], test_size=0.2)
model = LinearRegression().fit(X_train, y_train)

print(f"Predicted Prices: {model.predict(X_test)}")
