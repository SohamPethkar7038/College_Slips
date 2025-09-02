transactions = [['eggs', 'milk', 'bread'], ['eggs', 'apple'], ['milk', 'bread'], ['apple', 'milk'], ['milk', 'apple', 'bread']]
df = pd.DataFrame(transactions).stack().str.get_dummies().groupby(level=0).sum()

freq_items = apriori(df, min_support=0.2, use_colnames=True)
rules = association_rules(freq_items, metric="lift", min_threshold=1)

print(freq_items, "\n", rules)
