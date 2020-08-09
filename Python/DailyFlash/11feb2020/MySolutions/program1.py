'''
Write a Program to check whether the entered number by user is
Deficient or not.
{Note: A Number is termed as deficient number, if sum of all of its perfect
divisors is less than the number itself. E.g. 15 is deficient number, since 1 + 3 +
5 = 9 < 15.}
Input: 45
Output: 45 is Deficient Number.

'''

n=int(input("Input:"))
sum=0
for i in range(1,n):
	
	if(n%i==0):
		sum=sum+i
if(sum<i):
	print(n,"is deficient number")
else:
	print(n,"is not deficient number")
