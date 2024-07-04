inp=input().split()
a=int(inp[0])
b=int(inp[1])
c=10000*b//(a*a)

print(c)

if c>24:
    print("Obesity")