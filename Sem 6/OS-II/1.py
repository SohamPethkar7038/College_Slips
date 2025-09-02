import pandas as pd
from mlxtend.frequent_patterns import apriori, association_rules

data = [['bread', 'milk', 'eggs'],
        ['bread', 'butter', 'eggs', 'jam'],
        ['bread', 'milk', 'butter'],
        ['milk', 'butter', 'jam'],
        ['bread', 'milk', 'eggs', 'butter']]

df = pd.DataFrame(data).stack().str.get_dummies().groupby(level=0).sum()
freq_items = apriori(df, min_support=0.2, use_colnames=True)
rules = association_rules(freq_items, metric="lift", min_threshold=1)

print(freq_items, "\n", rules)
