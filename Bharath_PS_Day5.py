#Name=Bharath.P.S
#email=pedaballibharath@gmail.com

k=int(input())
if(2<=k<=10):
    def pascal(k):
        line = [1]
        for x in range(max(k,0)):
            line.append(int(line[x]*(k-x)/(x+1)))
        return line

    for i in range(k):
        lst = pascal(i)

        for j in range(len(lst)):
            print(lst[j],end=" ")    
        print() 
