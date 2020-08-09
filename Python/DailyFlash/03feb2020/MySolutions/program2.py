'''
Write a Program to convert entered Binary Number to Hexadecimal
Number.
Input: Binary Number: 1011
Output: Hexadecimal Number: B

'''
b=int(input("Binary Number:"))
rem=0
hexd=0
i=1
while(b!=0):
	rem=b%10
	hexd=hexd+rem*i
	i=i*2
	b=b//10
if(hexd==10):
	print("Hexadecimal Number:A")
elif(hexd==11):
	print("Hexadecimal Number:B")
elif(hexd==12):
	print("Hexadecimal Number:C")
elif(hexd==13):
	print("Hexadecimal Number:D")
elif(hexd==14):
	print("Hexadecimal Number:E")
elif(hexd==15):
	print("Hexadecimal Number:F")

else:
	print("Hexadecimal Number:",hexd)



