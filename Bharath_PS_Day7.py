#Name=Bharath.P.S
#email=pedaballibharath@gmail.com


master_str = "abcdefghijklmnopqrstuvwxyz"
input_str = input()

if(2< len(input_str) <=100):
    start = master_str.index(input_str[0])
    end = master_str.index(input_str[-1])
    master_slice = master_str[slice(start,end+1)]
    
    #Using set operations to find difference between two strings
    missing_letters = sorted(list(set(master_slice) - set(input_str)))    
    output = " ".join(missing_letters)
    if len(output) == 0:
        print("none")
    else:
        print(output)
