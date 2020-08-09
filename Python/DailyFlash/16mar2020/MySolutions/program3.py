'''
Write a Program that computes & prints each Numbers entered by
user using do while loop until user enters a Palindrome Number.
Input: 10 6 22 50 301 232
Output: 10 6 22 50 301 Terminating

'''

n=1
while(n!=0):
	val=int(input("Input:"))
	temp=val
	rev=0
	while(val>0):
		rem=val%10
		rev=rev*10+rem
		val=val//10
	if(temp==rev):
		#print("The number is a palindrome!")
		break
	else:
		print(temp)
