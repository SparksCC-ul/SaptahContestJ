num=int(input())
for i in range(num):
    lst=[]
    for j in range(3):
        a=int(input())
        lst.append(a)
    lst.sort()
    print(lst[1])
