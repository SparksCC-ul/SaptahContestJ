# Function to define n!
def fact(n):
    factorial = 1
    for i in range(1,n+1):
        factorial=i*factorial
    return factorial

#Function to define formula of element of pascals triangle
def pasc_formula(k):
    for i in range(k):
        for j in range(i+1):
            print(int(fact(i)/(fact(i-j)* fact(j))), end=' ')
        print()
    
k=int(input())
pasc_formula(k)

#Adarsh S Thambi
#adarshstshambi@gmail.com
