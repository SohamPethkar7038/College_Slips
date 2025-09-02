import pandas as pd
from mlxtend.frequent_patterns import apriori, association_rules


# Read the dataset (each row represents items bought together)
df = pd.read_csv('groceries.csv', header=None)


# Convert transactions into a list of lists
transactions = df.apply(lambda row: [item for item in row if str(item) != 'nan'], axis=1)


# Convert to one-hot encoding
df_encoded = transactions.explode().str.get_dummies().groupby(level=0).sum()
# Apply Apriori algorithm
frequent_itemsets = apriori(df_encoded, min_support=0.01, use_colnames=True)


# Generate association rules
rules = association_rules(frequent_itemsets, metric="lift", min_threshold=1)


# Display results
print("\nFrequent Itemsets:\n", frequent_itemsets)
print("\nAssociation Rules:\n", rules)



