chk=False
for i in range(0,5):
    n=int(input())
    if chk%3!=0:
        chk=True
        break

if chk==True:
    print(0)
else:
    print(1)