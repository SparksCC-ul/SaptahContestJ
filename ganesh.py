T=int(input("enter number of test cases:"))
for a in range(T):
    lst=[]
    for i in range(1,4):
        number=int(input("enter a number:"))
        lst.append(number)
    lst.sort()
    print("second largest value in",lst,"is",lst[1])

#Ganesh Ram B, ganesh31ram@gmail.com
