a=int(input())
cnt=0
for i in range(1,a+1):
    b=a/i
    a=a/i
    cnt+=1
    if b<=1:
        break

print(cnt)