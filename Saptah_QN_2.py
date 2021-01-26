#Name-Chandan.H
#email id-chandanhariharan@gmail.com
#          CODE WRITTEN IN PYTHON
n=int(input())
ar=[]
for i in range (0,n):
    a, b, c = map(int, input().split())
    second_highest = 0
    if a > b and a < c:
        second_highest = a
    elif b > a and b < c:
        second_highest = b
    elif c > a and c < b:
        second_highest = c
    elif (a == b and a == c) and b == c:
        second_highest = a
    elif a == b and a < c:
        second_highest = a
    elif a == b and a > c:
        second_highest = c
    elif a == c and a > b:
        second_highest = b
    elif a == c and a < b:
        second_highest = a
    elif b == c and b > a:
        second_highest = a
    elif b == c and b < a:
        second_highest = b
    ar.append(second_highest)

for i in range (0,n):
    print(ar[i])
