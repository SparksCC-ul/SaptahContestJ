'''
Anish Kumar
anish2272002@gmail.com
ISE 2020-21
PYTHON
'''
def gcd(a,b):
    if(b==0):
        return a
    return gcd(b,a%b)

N=int(input())
for i in range(N):
    c=int(input())
    num=input().split()
    if(c==1):
        print(gcd(int(num[0]),int(num[1])))
    else:
        print(int((int(num[0])*int(num[1]))/gcd(int(num[0]),int(num[1]))))
