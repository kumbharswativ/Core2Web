'''
Write a Program that checks whether the entered number is a
Prime Number or not.
{Note: A Prime Number is that number which is only divisible by 1 & that
number only.}
Input: 5
Output: 5 is Prime Number.

'''
n=int(input("Input:"))
c=0
for i in range(1,n+1):
	if(n%i==0):
		
		c=c+1
if(c==2):
	print(n,"is prime number")
else:
	print(n,"is not prime number")
