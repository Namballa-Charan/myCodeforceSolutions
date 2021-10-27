n = int(input())
xlst=[]
ylst=[]
countr,countl,countu,countb=0,0,0,0
for i in range(n):
    x,y = (map(int, input().split()))
    xlst.append(x)
    ylst.append(y)
xcpy=xlst.copy()
ycpy=ylst.copy()
xcpy.sort()
ycpy.sort()
for i in range(n):
    for j in range(n):
        if x[j]!= xcpy[0] and y[j]!= ycpy[0]:
            if x[i]>x[j] and y[i]==y[j]:
                countr+=1
            elif x[i]<x[j] and y[i]==y[j]:
                countl+=1
            elif x[i]==x[j] and y[i]<y[j]:
                countu+=1
            elif x[i]==x[j] and y[i]>y[j]:
                countb+=1
print(min(countr,countl,countu,countb))
