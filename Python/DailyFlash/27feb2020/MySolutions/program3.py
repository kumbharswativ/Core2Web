'''
Write a Program that accepts a number from user and prints
second Maximum digit from that number.
Input: 12357798
Output: The Second Maximum Digit from number 12357798 is 8

'''
n=int(input("Input:"))
m=0
s=0
rev=0

while(n>0):
	r=n%10
	if(m<r):
		m=r
	rev=rev*10+r
	n=int(n/10)

n=rev

while(n>0):
	r=n%10
	if(m!=r):
		if(s<r):
			s=r
	n=int(n/10)
print(s)

