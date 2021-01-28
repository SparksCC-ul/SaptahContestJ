#Name=Bharath.P.S
#email=pedaballibharath@gmail.com


def lcm(a,b):
    if(a==0 or b==0):
        return 0

    elif a > b:
        greater = a
    else:
        greater = b

    while(True):
        if((greater % a == 0) and (greater % b == 0)):
            lcm = greater
            break
        greater += 1
    return lcm

def gcd(a,b):
    gcd_of_num = (a*b)//lcm(a,b)
    return gcd_of_num

N = int(input())
if(N>=1 and N<=100):
    ans=[]              #crearting empty list to capture the answers
    for i in range(N):
        choice = int(input())
        inputnumbers = input().split(" ")
        a = int(inputnumbers[0])
        b = int(inputnumbers[1])
        
        if((a>1 and a<=100) and (b>1 and b<=100)):

            if choice==1:
                ans.append(gcd(a,b))

            if choice==2:
                ans.append(lcm(a,b))

for i in range(len(ans)):
    print(ans[i])         
