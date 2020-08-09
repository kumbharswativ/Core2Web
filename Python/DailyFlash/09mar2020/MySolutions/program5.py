'''
Write a Program calculates to accepts integers from user using do-
while loop until user enters a number that is divisible by 7.
Input: 65 32 1 4 5 2 6 56
Output: Exiting code, 56 is divisible by 7.

'''
n=1
while(n!=0):
	v=int(input())
	if(v%7==0):
		print("Exiting code,",v ,"is divisible by 7")		
		break
		

