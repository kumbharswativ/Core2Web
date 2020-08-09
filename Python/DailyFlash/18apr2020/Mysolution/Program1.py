str1=input("Enter first string:")
str2=input("Enter first string:")
m=int(input("How many characters from the string to compare:"))
flag=0
for i in range(m):
    if(str1[i]!=str2[i]):
        flag=1
        print("string is not equal ")
        break
if(flag==0):
    print("string is equal ")
