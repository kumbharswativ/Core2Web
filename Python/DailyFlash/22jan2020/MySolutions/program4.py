'''
Write a Program to simulate simple calculator. Accept two integers
from user and sign of operation to perform.
Input:
Enter First Number: 10
Enter Second Number: 20
Enter the sign of Operation: +
Output: Addition of 10 & 20 is 30.

'''
n1=int(input("Enter First Number:"))
n2=int(input("Enter Second Number:"))
op=input("Enter the Sign Operation:")

if(op=='+'):
	print("Addition of",n1,"&",n2,"is",n1+n2)
if(op=='-'):
	print("Substraction of",n1,"&",n2,"is",n1-n2)

if(op=='*'):
	print("Multiplication of",n1,"&",n2,"is",n1*n2)

if(op=='//'):
	print("Division of",n1,"&",n2,"is",n1//n2)

if(op=='%'):
	print("Modulus of",n1,"&",n2,"is",n1%n2)

if(op=='**'):
	print("Exponent of",n1,"&",n2,"is",n1**n2)


