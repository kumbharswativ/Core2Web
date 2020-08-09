'''
Write a program to calculate the factorial of a given number.
Input: 5
Output:
The Factorial of 5 is: 120
'''
fact=1
n=int(input("Input:"))
for i in range(1,n+1):
	fact=fact*i
print(fact)
