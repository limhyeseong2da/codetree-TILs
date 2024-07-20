inp=input().split()
prod=1
cnt=0
a=int(inp[0])
b=int(inp[1])

for i in range(1,b+1):
    if i%a==0:
        prod*=i
        cnt+=1
if cnt==0:
    print(0)
else:
    print(prod)