'''
Write a Program that accepts an integer from user and prints all of
its perfect divisors.
Input: 24
Output: Perfect Divisors of 24 are: 2 3 4 6 8 12

'''
n=int(input("Input:"))
for i in range(1,n):
	if(n%i==0):
		print(i,end=" ")
