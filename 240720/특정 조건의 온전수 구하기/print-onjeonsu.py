cnt=0
a=int(input())

for i in range(1,a+1):
    if i%2==0:
        continue
    elif i%10==5:
        continue
    elif i%3==0 and i%9!=0:
        continue
    print(i,end=' ')