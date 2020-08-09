'''
Write a program that accepts two integers from user and prints
multiplication & Division of them.
{Note: checks for smaller divisor amongst entered number while computing
division}
Input: 10 20
Output:
Multiplication is 200
Division is 2

'''
n1=int(input("Input:"))
n2=int(input("Input:"))
if(n1>=n2):
	div=n1//n2
	print("Division is :",div)
else:
	div=n2//n1
	print("Division is:",div)
mul=n1*n2
print("Multiplication is:",mul)
