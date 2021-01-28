def find_gcd(a,b):
    t=int(input())
    gcd = 1
    for i in range(1,t+1):
        if a%i==0 and b%i==0:
            gcd = i
    return gcd
x, y = int(input()).split(' ')
print((x, y, find_gcd(x, y)))
lcm = x * y / find_gcd(x, y)
print((x, y, lcm))
#SHRISHA NAYAK
