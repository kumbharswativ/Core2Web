'''
Write a program that accepts two integers from user and prints
addition & Subtraction of them.
{Note: checks for greater number to subtracts with while subtracting numbers}
Input: 10 20
Output:
Addition is 20
Subtraction is 10

'''
n1 = int(input("Input : "))
n2 = int(input("Input : "))
if(n1>=n2):

	sub=n1-n2
	print("Substaction is:",sub)

else:
	sub=n2-n1
	print("Substaction is:",sub)

add=n1+n2
print("Addion is",add)

