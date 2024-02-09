lis=list(map(int,input().split()))
lis.sort()

c=lis[3]-lis[0]
b=lis[2]-c
a=lis[3]-(b+c)



print(a,b,c)
