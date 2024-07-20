a=int(input())
sum=0

for i in range(1,101):
    if sum>=a:
        break
    else:
        sum+=i
        k=i

print(k)