'''
Write a Program that accepts Three integers from user and prints
minimum number from them.
Input: 56 7 99
Output: The Minimum number amongst 56 7 & 99 is 7

'''

n1,n2,n3=input("Inputs:").split( )
if(n1<n2 and n1<n3):
	print("The Minimum number amongst",n1,n2,"&",n3,"is",n1)
elif(n2<n1 and n2<n3):
	print("The Minimum number amongst",n1,n2,"&",n3,"is",n2)
else:
	print("The Minimum number amongst",n1,n2,"&",n3,"is",n3)
