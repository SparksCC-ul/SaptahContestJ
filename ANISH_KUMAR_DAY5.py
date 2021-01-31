'''
ANISH KUMAR
anish2272002@gmail.com
ISE 2020-21
PYTHON
'''

def fact(n):
    if(n==0):
        return 1
    else:
        return n*fact(n-1)

k=int(input())
for i in range(0,k):
    for j in range(0,i+1):
        print(int(fact(i)/(fact(i-j)*fact(j))),end=' ')
    print()
