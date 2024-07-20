cnt_a=0
cnt_b=0
cnt_c=0

a=int(input())

for i in range(1,a+1):
    if i%12==0:
        cnt_c+=1
    elif i%3==0:
        cnt_b+=1
    elif i%2==0:
        cnt_a+=1

print("%d %d %d"%(cnt_a,cnt_b,cnt_c))