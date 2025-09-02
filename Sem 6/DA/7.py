import pandas as pd
from mlxtend.frequent_patterns import apriori, association_rules


df = pd.read_csv('Market_Basket_Optimisation.csv', header=None)
df = df.stack().str.get_dummies().groupby(level=0).sum()


items = apriori(df, 0.01, True)
rules = association_rules(items, 'confidence', 0.9)


print()
print(items)
print()
print(rules)
