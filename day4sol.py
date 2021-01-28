def gcd(x,y):
    if (x==0):
        return y
    if (y==0):
        return x
    if (x==y):
        return x
    if (x>y):
        return gcd(x-y,y)
    return gcd(x, y-x)

def lcm(x,y):
    return int((x*y)/gcd(x,y))

t=input()
for i in range(int(t)):
    choice=input()
    if (int(choice)==1):
        a,b = input().split()
        print(gcd(int(a),int(b)))
    elif (int(choice)==2):
        a,b = input().split()
        print(lcm(int(a),int(b)))
    else:
        print("Invalid choice")

#Adarsh S Thambi
#adarshsthambi@gmail.com
