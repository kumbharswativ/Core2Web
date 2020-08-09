string=input("Enter string:")
ch=input("Enter character to find occurrence of:")
a=0
for i in string:
    if i in(ch):
        a+=1
print("The occurrence of", ch,"in the entered sting is",a)
