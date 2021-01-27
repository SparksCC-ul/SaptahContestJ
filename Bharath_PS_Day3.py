#Name=Bharath.P.S
#email=pedaballibharath@gmail.com

import numpy as np
N=int(input())
lst=[]
for i in range(N):
    inputnumbers = input().split(" ")
    lst.append(inputnumbers)
    
array1=np.array(lst).astype(int)          # converting list to np array and values to integers
row_sum = np.sum(array1, axis=1)          # finding the sum row wise
max0=np.where(row_sum==row_sum.min())     # rows with max zero will have min sum
print(max0[0][0])
