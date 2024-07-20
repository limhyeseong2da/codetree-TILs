a=int(input())

for i in range(a,101):
    if i<60:
        print("F",end=' ')
    elif 59<i<70:
        print("D",end=' ')
    elif 69<i<80:
        print("C",end=' ')
    elif 79<i<90:
        print("B",end=' ')
    else:
        print("A",end=' ')