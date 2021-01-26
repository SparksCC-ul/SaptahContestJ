#SUBRAT PANDEY
#subratpandey100@gmail.com




list = []

T = int(input("Total number of trials :- "))
if T >=1 and T<= 1000:

    for b in range(T):
        for i in range(3):
            x = int(input("Enter the value :- " ))
            if x >= 1 and x<= 1000000: 
                list.append(x)
            
            
            
            else:
                
                print("out of range")
                list=[]
                break

                
                
            
            list.sort()
        if len(list) == 0:
            print("")
        elif list[0] == list[1] or list[0] == list[2] or list[1] == list[2]:
            print("Second highest digit is :- " , list[0])
        else:
            print("Second highest digit is :- " , list[-2])
            print("Next CASE")

    print("End")
else :
    print("Enter the number between1 and 1000")
