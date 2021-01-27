import numpy as np

arr = np.array( [[1,0,1], [0,0,0],[1,0,1]])
n = len(arr[0])

print(arr)
print()
print("This is " + str(n) +"*"+str(n)+ " Matrix")

v = 0 
h = 0 
z = 0 

def checking1_element():
    global v 
    global h
    global z
    for k in range(n):
        
        for i in range(n):
            
            if (arr[i,k] == 0) and k==0:
                v = v+1
                
            else:
                None
        
        for i in range(n):
            
            if (arr[i,k] == 0) and k==1:
                h=h+1
                
            else:
                None
              
        for i in range(n):
            
            if( arr[i,k] == 0 )and k==2:
               
                z=z+1
                
            else:
                None
        
        
        
    print("Number of zero in row 1,2,3 respectively")
    print("*************")    
    print(v)
    print(h)
    print(z)
    print("*************")
        
        
    
    

    if v>h and v>z:
        print(" row 1 have maximum number of zeros i.e. "  ) ; print(v)
    elif h>v and h>z:
        print(" row 2 have maximum number of zeros i.e. "  )  ; print(h)
    elif z > v and z>h:
        print(" row 3 have maximum number of zeros i.e. " )  ; print(z)
    elif v == h :
        print("its a tie betweeen 1 and 2 row , total number of 0 =")
        print(v)
    elif v == z :
        print("its a tie betweeen 1 and 3 row , total number of 0 =")
        print(h)
    elif z == h :
        print("its a tie betweeen 3 and 2 row , total number of 0 =")
        print(z)


checking1_element()




# SUBRAT PANDEY
# subratpandey100@gmail.com
