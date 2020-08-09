'''
Write a Program to Convert entered Binary Number to Decimal
Number
Input: Binary Number: 1011
Output: Decimal Number: 11

'''
b=int(input("Binary Number:"))
rem=0
dec=0
i=1
while(b!=0):
	rem=b%10
	dec=dec+rem*i
	i=i*2
	b=b//10
print("Decimal Number:",dec)

