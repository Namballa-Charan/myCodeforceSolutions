n=int(input())
flag=0
lst=list(map(int,input().split(" ")))
#print(lst)
lst1=lst.copy()
lst1.sort()
#print(lst1)
if n>1:
    if lst1[0] == lst1[1]:
        flag = 1

if flag==1:
    print("Still Rozdil")
else:
    minval = min(lst)
    ans = lst.index(minval)
    print(ans+1)
