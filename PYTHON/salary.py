basic=(input("enter your basic salary"))
if basic>=50000:
               da=0.7*basic
               ta=0.5*basic
               hra=0.1*basic
if basic>=30000:
               da=0.7*basic
               ta=0.3*basic
               hra=0.05*basic
else:
               da=0.7*basic
               ta=0.15*basic
               hra=0.03*basic
salary=(basic+da+ta+hra)
print("your net salary is",salary)
