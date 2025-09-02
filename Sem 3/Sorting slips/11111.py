def falseposition(f,x0,x1,e):
  if (f(x0)*f(x1))>0.0:
print("given guess values do not break the root")
print('try again with different guess values')
else:
step = 1
condition = True
while condition:
x2 = ((x0*f(x1))-(x1*f(x0)))/(f(x1)-f(x0))
print('Iteration =',step,'x2=',x2,'and f(x2)=',f(x2))
if (f(x0)*f(x2))<0:
x1=x2
else:
x0=x2
step = step + 1
condition = abs(f(x2))> e
print('Required root is :',x2)
from math import *
def f(x):
return x**6-x**4-x**3-1
falseposition(f,1,2,0.0001)