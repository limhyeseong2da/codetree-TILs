n=int(input())
chk=False
for i in range(2,n):
    if n%i==0:
        chk=True
        break
if chk==True:
    print("C")
else:
    print("N")