s=input()
miss=False
for i in range(len(s)-1):
    if(s[i+1]==chr(ord(s[i])+1)):
        continue
    miss=True
    print(chr(ord(s[i])+1), end=' ')
if not miss:
    print('none')

#Adarsh S Thambi
#adarshsthambi@gmail.com
