import pandas as pd
from mlxtend.frequent_patterns import apriori, association_rules


data = [['Bread', 'Milk'],
        ['Bread', 'Diaper', 'Beer', 'Eggs'],
        ['Milk', 'Diaper', 'Beer', 'Coke'],
        ['Bread', 'Milk', 'Diaper', 'Beer'],
        ['Bread', 'Milk', 'Diaper', 'Coke']]


df = pd.DataFrame(data).stack().str.get_dummies().groupby(level=0).sum()


for sup in [0.2, 0.4]:
    itemsets = apriori(df, min_support=sup, use_colnames=True)
    rules = association_rules(itemsets, metric='confidence', min_threshold=0.7)
   
    print()
    print(itemsets)
    print()
    print(rules)
