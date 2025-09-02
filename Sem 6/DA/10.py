import pandas as pd
from mlxtend.frequent_patterns import apriori, association_rules

# Transactions dataset
transactions = [
    ['butter', 'bread', 'milk'],
    ['butter', 'flour', 'milk', 'sugar'],
    ['butter', 'eggs', 'milk', 'salt'],
    ['eggs'],
    ['butter', 'flour', 'milk', 'salt']
]

# Convert to DataFrame
df = pd.DataFrame(transactions).stack().str.get_dummies().groupby(level=0).sum()

# Apply Apriori with different min_support values
for min_sup in [0.2, 0.3]:
    freq_items = apriori(df, min_support=min_sup, use_colnames=True)
    rules = association_rules(freq_items, metric="lift", min_threshold=1)
    print(f"\nMin Support: {min_sup}\nFrequent Itemsets:\n{freq_items}\nRules:\n{rules}")
1