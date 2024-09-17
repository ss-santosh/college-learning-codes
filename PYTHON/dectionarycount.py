d={}
s=input("enter a sentence")
for i in s:
               d[i]=d.get(i,0)+1
for k,v in d.items():
               print(k,"occurs",v,"items")
