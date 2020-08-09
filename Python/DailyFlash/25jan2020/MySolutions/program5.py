'''
Write a Program that accepts Two integers from user and prints
maximum number from them.
Input: 56 99
Output: The Maximum number amongst 56 & 99 is 99

'''

n1=int(input("Input:"))
n2=int(input("Input:"))

if(n1>n2):
	print("The maximum number amongst",n1,n2,"is",n1)
else:
	print("The maximum number amongst",n1,n2,"is",n2)
