n=int(input())

cnt=0

while True:
    if n==1:
        break
    else:
        n=n/2
        cnt+=1
print(cnt)