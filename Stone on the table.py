n=int(input())
stone=input()
cnt=0
for i in range(1,n):
    if stone[i]==stone[i-1]:
        cnt+=1
print(cnt)
