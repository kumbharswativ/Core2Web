'''
Write a Program to that accepts an integer value from user and
prints all odd numbers from that number to one using while loop.
Input: 65
Output: 65 63 61 59 57 53 51. ....1

'''

n=int(input())
while(n>=0):

	if(n%2==1):
		print(n,end=" ")
	n=n-1
