import sys
i = input("")
x , y = i.split()
x = int(x)
y = int(y)
if type(x) is not int:
   sys.exit(1)
if type(y) is not int:
   sys.exit(1)
if x > 100 or x < 0:
   sys.exit(1)
if y > 100 or y < 0:
   sys.exit(1)
z = x+y
if z < 2 or z > 200:
   sys.exit(1)
print(z)
