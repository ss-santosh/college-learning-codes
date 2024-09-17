d={}
n=int(input("how many students"))
for i in range(n):
               nm=input("enter a name")
               roll=input("enter roll")
               d[roll]=nm
for k , v in d.items():
               print(k," ",v)
for k in d.keys():
               print(k)
for v in d.values():
               print(v)
