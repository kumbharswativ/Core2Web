'''
Write a Program to that prints series of Even numbers in reverse
order from the limiting number entered by user.
Input: 100
Output: 100 98 96 . . .. 0

'''
n=int(input("Input:"))
for i in range(n+1,0,-1):
	if(i%2==0):
		print(i,end=" ")
