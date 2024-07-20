a=int(input())
sum=1

for i in range(2,a):
    if a%i==0:
        sum+=i

if sum==a:
    print("P")
else:
    print("N")