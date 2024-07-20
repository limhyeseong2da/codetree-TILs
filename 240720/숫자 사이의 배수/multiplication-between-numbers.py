inp=input().split()

a=int(inp[0])
b=int(inp[1])
sum=0
count=0
for i in range(a,b+1):
    if i%5==0 or i%7==0:
        sum+=i
        count+=1


aver=sum/count
print("%d %.1f"%(sum,aver))