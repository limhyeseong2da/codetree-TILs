a=int(input())
prod=1

for i in range (1,11):
    if prod>a-1:
        k=i-1
        break
    else:
        prod*=i
        k=i

print(k)