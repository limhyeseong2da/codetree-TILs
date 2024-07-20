a=int(input())
sum=0
cnt=0

for i in range(a):
    b=int(input())
    sum+=b
    cnt+=1

ave=sum/cnt

print("%d %.1f"%(sum,ave))