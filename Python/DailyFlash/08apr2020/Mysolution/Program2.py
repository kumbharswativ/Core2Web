string=input("Enter string:")
str1=input("Enter a substring to find:")
if(string.find(str1)):
	print("the entered string consists",str1,"as substring")
else:
	print("the entered string doesn't consists",str1,"as substring")
