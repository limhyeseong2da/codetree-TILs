inp= input().split()
a=int(inp[0])
b=int(inp[1])

sum=0

if a>b:
    for i in range (b,a+1):
        if i%5==0:
            sum+=i
elif a<b:
    for i in range(a,b+1):
        if i%5==0:
            sum+=i
else:
    if a%5==0:
        sum=a

print(sum)