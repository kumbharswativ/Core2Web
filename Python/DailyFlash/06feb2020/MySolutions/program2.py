'''
Write a Program to Convert entered Decimal Number to Binary
Number
Input: Binary Number: 35
Output: Octal Number: 100011

'''

def dec(n):
	if n>1:
		dec(n//2)
	print(n%2,end=" ")
a=int(input("Decimal number:"))
dec(a)
