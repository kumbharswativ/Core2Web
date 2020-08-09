s=input("Enter the string:")
a = "" 
b=int(input("Enter index to remove:"))
for i in range(0, len(s)): 

    if i != b: 

        a = a+ s[i] 
print(a)




