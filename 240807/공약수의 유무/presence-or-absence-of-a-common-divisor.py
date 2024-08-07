inp=input().split()
a,b=int(inp[0]),int(inp[1])
chk=False

for i in range (a,b+1):
    if 1920%i==0 and 2880%i==0:
        chk=True
        break

if chk==True:
    print(1)
else:
    print(0)