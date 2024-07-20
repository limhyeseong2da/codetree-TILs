a=int(input())
sum=0

for i in range (a):
    b=int(input())
    if b%2==1 and b%3==0:
        sum+=b

print(sum)