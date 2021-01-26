print('Enter the first number(named as A).')
A = int(input())
print('Enter the second number(named as B).')
B = int(input())
print('Enter the third number(named as C).')
C = int(input())

if A in range(1, 100000) and B in range(1, 100000) and C in range(1, 100000):
    if A == B == C:
        print('No numbers should be equal')

    if A >= B and B >= C:
        print('Second largest number is B.')
    else:
        print('Second largest number is C.')

    if C >= A:
        print('Second largest number is A.')
    else:
        print('Second largest number is C.')

else:
    print('Invalid input!')
