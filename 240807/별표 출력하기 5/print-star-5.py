n=int(input())

for i in range(n):
    for k in range(0,(n-i)):
        for t in range(0,(n-i)):
            print("*",end="")
        print(end=' ')
    print()