inp=input().split()

a=int(inp[0])
b=int(inp[1])
sum=0

for i in range (a,b+1):
    if i%2==0:
        sum+=i
print (sum)