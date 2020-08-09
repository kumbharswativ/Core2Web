'''
Write a Program to that prints series of odd numbers in reverse
order from the limiting number entered by user.
Input: 100
Output: 99 97 95 93 . . .. 1

'''
n=int(input("Inputs:"))
for i in range(n,0,-1):
	if(i%2==1):
		print(i,end=" ")
		
