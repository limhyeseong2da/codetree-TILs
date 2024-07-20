a=int(input())
b=a
cnt=0
for i in range(1,a+1):
    b=b//i
    cnt+=1
    if b<=1:
        break

print(cnt)