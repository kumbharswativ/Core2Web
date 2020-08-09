'''
Write a Program to check whether the entered number is Strong
Number or Not.
{Note: A number can be termed as strong number; if the sum of factorials of
each digit from that number is equal to that number, itself. e.g. 145 is a Strong
Number since 1 + 24 + 120 = 145.}
Input: 145
Output: 145 is a Strong Number.

'''

n=int(input("Input:"))
sum=0
temp=n
while(n):
	i=1
	fact=1
	rem=int(n%10)
	while(i<=rem):
		fact=fact*i
		i=i+1
	sum=sum+fact
	n=int(n//10)
if(sum==temp):
	print(temp,"is strong number")
else:
	print(temp,"is not strong number")

