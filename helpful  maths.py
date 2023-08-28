num = input().split("+")
num.sort()
res=""
for i in num:
    res= res + i + "+"
print(res[:-1])
