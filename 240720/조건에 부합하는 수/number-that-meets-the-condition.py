a=int(input())
arr=[]

for i in range (1,a+1):
    if i%2==0 and i%4!=0:
        continue
    elif (i//8)%2==0:
        continue
    elif i%7<4:
        continue
    arr.append(i)

arr.sort()

for num in arr:
    print(num,end=' ')