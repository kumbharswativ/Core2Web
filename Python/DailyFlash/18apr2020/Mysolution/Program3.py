str1=input("Enter first string:")
str2=input("Enter second string:")
print("second string after removing all repeating characters:")
for i in str2:
    if i not in str1:
        print(i,end=" ")
print()
