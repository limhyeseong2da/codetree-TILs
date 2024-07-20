prod=1

inp=input().split()
a=int(inp[0])
b=int(inp[1])

for i in range (b):
    prod*=a
print(prod)