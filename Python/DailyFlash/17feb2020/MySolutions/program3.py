'''
Write a Program to that accepts a number from user print
multiplication of all Even Digits from that number.
Input: 1234
Output: The Multiplication of all Even Digits is 8

'''
num=int(input("Input:"))
a=1
temp=num
while(num>0):
	if(num%2==0):
		a=a*(num%10)
	num=num//10
print("The multiplication of all even digit is",a)   
