sum=int(input())
cnt=1

while True:
    a=int(input())

    if a//10>2:
        break
    elif a//10==0:
        break
    else:
        sum+=a
        cnt+=1

print("%.2f"%(sum/cnt))