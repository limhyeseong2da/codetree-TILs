inp=input().split()
a,b,c=int(inp[0]),int(inp[1]),int(inp[2])

chk=False

for i in range (a,b+1):
    if i%c==0:
        chk=True
        break

if chk==False:
    print("No")
else:
    print("Yes")