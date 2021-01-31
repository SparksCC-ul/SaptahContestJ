#subratpandey100@gmail.com
#SUBRAT PANDEY

value = input("Enter the value to be checked :- ")
l = len(value)
alphabet = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"]
check= []
final = []
if l<=100 and l>=2:
    for i in range(l):
        check.append(value[i])


    for x in range(26):
        if alphabet[x] == check[0]:
            x = int(x)
            break
        else:
            None
    for y in range(26):
        if alphabet[y] == check[-1]:
            y = int(y)
            break
        else:
            None

    for k in range(x,(y+1)):
        final.append(alphabet[k])

    def Diff(final, check):
        difference = [m for m in final + check if m not in final or m not in check]
        return difference

    output = Diff(final, check)

    for o in range(len(output)):
        print(output[o], end=", ")

else:
    print("Entered value is out of range")
