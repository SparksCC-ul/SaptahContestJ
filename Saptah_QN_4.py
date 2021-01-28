#Name-Chandan.H
#email id-chandanhariharan@gmail.com
#     CODE WRITTEN IN PYTHON
def gcd(a, b):

    if (a == 0):
        return b
    if (b == 0):
        return a
    if (a == b):
        return a
    if (a > b):
        return gcd(a - b, b)
    return gcd(a, b - a)


def lcm(a, b):
    lar = max(a, b)
    small = min(a, b)
    i = lar
    while (1):
        if i % small == 0:
            return i
        i += lar
n=int(input())
choice=0
for i in range(n):
    choice=int(input())
    x,y=map(int,input().split())
    if choice==1:
        print(gcd(x,y))
    if choice==2:
        print(lcm(x,y))
