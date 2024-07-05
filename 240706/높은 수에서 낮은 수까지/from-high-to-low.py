inp=input().split()
a=int(inp[0])
b=int(inp[1])

if b>a:
    for b in range (b,a-1,-1):
        print(b,end=' ')
else:
    for a in range (a,b-1,-1):
        print(a,end=' ')