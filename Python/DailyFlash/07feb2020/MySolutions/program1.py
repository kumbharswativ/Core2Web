'''
Write a Program to whether a number entered by user is Prime
Number or Not.
{Note: Prime Number is such a number, which is only divisible by 1 & that
number itself}
Input: 5
Output: 5 is a Prime Number.

'''
n=int(input("Input:"))
if(n>1):
	for i in range(2,n):
		if(n%i==0):
			print(n,"is not prime number")
	else:
		print(n,"is prime number")
else:
	print(n,"is not prime number")
	
