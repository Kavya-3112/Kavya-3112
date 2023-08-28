a,b,c=map(int,input().split())
cnt=0
for i in range(1,c+1):
    cnt+=a*i
if cnt>b:
    print(cnt-b)
else:
    print(0)
    
