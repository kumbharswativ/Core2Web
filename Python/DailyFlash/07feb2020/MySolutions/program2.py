'''
Write a Program to Convert entered Decimal Number to
Hexadecimal Number
Input: Decimal Number: 43
Output: Hexadecimal Number: 2B

'''
def dectohex(n):
	h=['0']*100
	i=0
	while(n!=0):
		temp=0
		temp=n%16
		if(temp<10):
			h[i]=chr(temp+48)
			i=i+1
		else:
			h[i]=chr(temp+55)
			i=i+1
		n=int(n/16)
	j=i-1
	while(j>=0):
		print((h[j]),end=" ")
		j=j-1
n=int(input("Decimal Number:"))
dectohex(n)
