'''
Write a Program to check whether the entered number is
Palindrome number or not.
Input: 12321
Output: 12321 is a Palindrome Number.

'''

n=int(input("Input:"))
temp=n
rev=0
while(n>0):
	rem=n%10
	rev=rev*10+rem
	n=n//10
if(temp==rev):
	print("The number is a palindrome!")
else:
	print("The Number is not a palindrome!")
