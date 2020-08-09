'''
Write a Program that accepts Two integers from user and prints the
series of factorial of all numbers between those two inputs.
Input: 1 to 5
Output:
Factorial of 1 = 1
.
.
Factorial of 5 = 120

'''
fact=1
n1=int(input("Inputs:"))
n2=int(input("Inputs:"))
for i in range(n1,n2+1):
	fact=fact*i
	print("Factorial of",i,"=",fact)
