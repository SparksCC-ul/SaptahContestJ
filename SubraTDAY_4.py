# SUBRAT PANDEY
# subratpandey100@gmail.com


def g(x, y):
    if (x > y):
        return g(x - y, y)

    if (x == 0):
        return y
    if (y == 0):
        return x
    if (x == y):
        return x

    return g(x, y - x)

def l(x, y):


   if x > y:
       z = x
   else:
       z = y

   while(True):
       if((z % x == 0) and (z % y == 0)):
           l = z
           break
       z += 1

   return l




T = int(input(""))
if T >= 1 and T <= 1000:
    for k in range(T):

        c = int(input())
        if c == 1:
            x, y = input().split()
            x = int(x)
            y = int(y)
            if (g(x, y)):
                print( g(x, y))
            else:
                print()
        elif c==2 :

            x, y = input().split()
            x = int(x)
            y = int(y)
            print(l(x, y))
        else:
            print()

else:
    print("Enter the number between1 and 1000")
