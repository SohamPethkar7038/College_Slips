data = {'No': [1, 2, 3, 4], 'Company': ['Tata', 'MG', 'Kia', 'Hyundai'], 'Model': ['Nexon', 'Astor', 'Seltos', 'Creta'], 'Year': [2017, 2021, 2019, 2018]}
df = pd.DataFrame(data)

# Convert categorical values into numeric
df_encoded = pd.get_dummies(df[['Company', 'Model', 'Year']])

# Apply Apriori
freq_items = apriori(df_encoded, min_support=0.2, use_colnames=True)
rules = association_rules(freq_items, metric="lift", min_threshold=1)

print(freq_items, "\n", rules)
