'''
Write a Program that checks whether an entered number is
Harshad Number or Not.
{Note: A number is termed as Harshad number if sum of all digits from that
number is Perfect Divisor of that number. E.g., 171, 1+7+1 = 9, and 9 is perfect
divisor of 171 so 171 is Harshad number.}
Input: 9
Output: 9 is harshad number.

'''

n=int(input("Input:"))
rem=sum=0
temp=n
while(n>0):
	rem=n%10
	sum=sum+rem
	
	n=n//10
if(temp%sum==0):
	print(sum,"is a harshad number",end=" ")
else:
	print(sum,"is not a harshad number",end=" ")
