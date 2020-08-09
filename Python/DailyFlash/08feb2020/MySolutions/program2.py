'''
Write a Program to Convert entered Decimal Number to Octal
Number
Input: Decimal Number: 15
Output: Octal Number: 17

'''

def dectooct(d):
	o=0
	i=1
	while(d!=0):
		o=o+(d%8)*i
		d=int(d/8)
		i=i*10

	return o
d=int(input("Decimal number:"))
print("octal number:",dectooct(d))
