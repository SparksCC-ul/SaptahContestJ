#Name-Chandan.H
#email id-chandanhariharan@gmail.com
#     CODE WRITTEN IN PYTHON
matrix=[]
ar=[]
c=0
n=int(input())
for i in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)
for i in range(n):
    count = 0
    for j in range(n):
        if matrix[i][j]==0:
            count=count+1
    ar.append(count)


maxi=max(ar)
ind=ar.index(maxi)
print(ind)
