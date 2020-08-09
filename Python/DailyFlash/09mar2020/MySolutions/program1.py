'''
Write a Program that Checks whether a number entered by user is
Duck Number or Not.
{Note: A duck number is such a number, which at least contains a Zero as digit
in it, but bot only at the beginning of that number. e.g. 12804, since it contains
a zero it is a duck number, where 0863 is not a duck number because it
contains zero at the beginning.}
Input: 1239086
Output: 1239086 is a Duck Number.

'''
n=int(input("Input:"))
c=0
temp=n
while(n!=0):
	u=n%10
	
	if(u==0):
		c=c+1
	n=n//10
if(c>0):
	print(temp,"is a Duck nummber")



