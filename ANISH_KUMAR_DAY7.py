'''
ANISH KUMAR
anish2272002@gmail.com
ISE 2020-21
PYTHON
'''

alpha=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
st=input()
s=0
var=0
for i in range(alpha.index(st[0]),alpha.index(st[-1])):
    if(alpha[i]==st[s]):
        s=s+1
    else:
        var=1
        print(alpha[i],end=' ')

if(var==0):
    print(None)
