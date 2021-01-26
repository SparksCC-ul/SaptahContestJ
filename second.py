#SHRISHA NAYAK
#shrishanyk06@gmail.com
T = int(input())
li = []
for x in range(0, T):
  nums = input().split(' ')
  nums2 = [int(z) for z in nums]
  nums2.sort()
  li.append(str(nums2[1]))
print(" ".join(li)) 
