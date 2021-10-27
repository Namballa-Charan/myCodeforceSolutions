n = int(input())
str1=input()
dict= {}
flag= False
for i in str1:
    if i not in dict.keys():
        dict[i]=1
    else:
        dict[i]+=1
for i in dict.values():
    if i!=n:
        flag=False
    else:
        flag=True
if(flag==True):
    for x in range(n):
        for i in dict:
            print(i,end="")
else:
    print("-1")