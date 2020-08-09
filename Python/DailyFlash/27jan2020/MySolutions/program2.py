'''
Write a Program that accepts Two integers from user and prints
minimum number from them.
Input: 56 99
Output: The Minimum number amongst 56 & 99 is 56

'''

n1,n2=input("Input:").split( )
if(n1>n2):
	print("The Minimum number amongst",n1,"&",n2,"is",n2)
else:
	print("The Minimum number amongst",n1,"&",n2,"is",n1)
