import math

print('The first number is :')
a = int(input())
print('The second number is :')
b = int(input())

def GCD(a,b):
    print('The GCD of the two number a and b is:', end = '')
    print(math.gcd(a, b))

def LCM(a,b):
    print('The LCM of the two number a and b is:', end = '')
    print((a * b)//math.gcd(a, b))

if a>=1 and a<=100 and b>=1 and b<=100:
    GCD(a, b)
    LCM(a,b)
else:
    print('Invalid Input')

#Email siddhantpriyadarshi18581@gmail.com  Name  Siddhant Priyadarshi
