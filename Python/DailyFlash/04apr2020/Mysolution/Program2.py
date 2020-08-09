string=input("Enter a string:")
a=0
e=0
s=0
o=0
u=0
for i in string:
    if i in("A","E","I","O","U","a","e","i","o","u"):
        if(i=="a" or i=="A"):
            a+=1
        elif(i=="e" or i=="E"):
            e+=1
        elif(i=="i" or i=="I"):
            s+=1
        elif(i=="o" or i=="O"):
            o+=1
        elif(i=="u" or i=="U"):
            u+=1
        
print("a=",a)
print("e=",e)
print("i=",s)
print("o=",o)
print("u=",u)
