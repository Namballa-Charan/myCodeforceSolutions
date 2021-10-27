n=int(input())
dict = {}
while n>0:
    keyIp=input()
    if keyIp not in dict.keys():
        dict[keyIp]=1
    else:
        dict[keyIp]+=1
    n-=1
print(max(dict,key=dict.get))