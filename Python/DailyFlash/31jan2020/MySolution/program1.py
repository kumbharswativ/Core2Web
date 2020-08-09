'''
Write a Program to that prints the series which increases with the
number entered by user.
Input: 15
Output: 1 16 31 46 . . ..

'''
n=int(input("Inputs:"))

for i in range(n):
	
	print(n*i+1,end=" ")

