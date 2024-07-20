sum=0
cnt=0
while True:
    a=int(input())

    if a//10>2:
        break
    else:
        sum+=a
        cnt+=1

print("%.2f"%(sum/cnt))