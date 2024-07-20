sum=0
cout=0
for i in range(10):
    a=int(input())
    if -1<a<201:
        sum+=a
        cout+=1


ave=sum/cout
print("%d %.1f"%(sum,ave))