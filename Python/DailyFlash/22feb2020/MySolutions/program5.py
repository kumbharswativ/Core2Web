'''
Write a Program that prints frequency of a digit from a number,
where user provides number & digit both.
Input:
Number: 1231234
Digit to check Frequency: 3
Output: The Frequency of 3 in number 1231234 is 2.

'''

n=int(input("Input:"))
d=int(input("digit to check frequency:"))
c=0
temp=n
while(n>0):
	if(n%10==d):
		c+=1
		
	n=int(n/10)
	
print("The Frequency of",d,"in number",str(temp),"is",c)
