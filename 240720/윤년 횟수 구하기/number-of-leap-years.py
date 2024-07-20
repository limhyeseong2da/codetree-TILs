cnt=0

a=int(input())

for i in range(1,a+1):
    if i%4==0:
        if i%100==0:
            if i%400==0:
                cnt+=1
        else:
            cnt+=1
print(cnt)