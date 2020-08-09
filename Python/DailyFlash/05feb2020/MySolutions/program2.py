'''
Write a Program to Convert entered Binary Number to Octal
Number
Input: Binary Number: 1011
Output: Octal Number: 13
'''

b=int(input("Binary Number:"))
d=0
o=0
i=0
while(b!=0):
	d=d+(b%10)*pow(2,i)
	i=i+1
	b=int(b//10)

i=1

while(d!=0):
	o=o+(d%8)*i
	d=int(d//8)
	i=i*10
	print(o,end=" ")



