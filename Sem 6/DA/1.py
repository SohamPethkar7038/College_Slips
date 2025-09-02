import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression

x=np.array(1,11).reshape(-1,1)
y=np.array([45000, 50000, 60000, 80000, 110000, 150000, 200000, 300000, 500000, 1000000])
x_train,x_text,y_train,y_test=train_test_split(x,y,test_size=0.3,random_state=42)

model=LinearRegression().fit(x_train,y_train)

print("\n training data :")
print(pd.DataFrame({'Position':x_train.flatten(),'salary':y_train}))
print("\n testing data :");
print(pd.DataFrame({'Position':x_test.flatten(),'salary':y_test}));

print("\n coefficient :",model.coef_[0])
print("intercept :",model.intercept_)