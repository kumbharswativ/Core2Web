'''
Write a Program to check whether the entered number is
Abundant number or not.
{Note: a number can be termed as abundant if the sum of all of its perfect
divisors is greater than that number itself, e.g. 12: 1+2+3+4+6 = 16 > 12 so 12
is an abundant number.}
Input: 18
Output: 18 is abundant number since 1 + 2 + 3 + 6 + 9 = 21, which is greater
than 18.

'''
n=int(input("Input:"))
sum=0
for i in range(1,n):
	if(n%i==0):
		sum=sum+i
if(n<sum):
	
	print(n," is abundunt number since sum =",sum,"Which is greater than",n)
else:
	print("not abundunt no")

