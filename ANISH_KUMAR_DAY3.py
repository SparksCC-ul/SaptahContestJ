'''
ANISH KUMAR
ISE 2020-21
anish2272002@gmail.com
PYTHON
'''

N=int(input())
mat=[]
lst=[]
for i in range(N):
    mat.append([])
    for j in range(N):
        a=int(input())
        mat[i].append(a)
    lst.append(mat[i].count(0))
print(lst.index(max(lst)))
