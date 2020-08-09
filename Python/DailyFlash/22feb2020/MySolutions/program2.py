'''
Write a Program that accepts a number from user and asks for user
choice from (Binary, Octal, and Hexadecimal) and prints respective values of
each digit from that number.
{Note: User Choice, 1 for Binary, 2 for Hexadecimal, and 3 for Octal)
Input:
Enter Number: 123
Enter Choice: 1
Output:
Binary of 1: 1
Binary of 2: 10
Binary of 3: 11

'''
a=int(input("Enter Number:"))
n=int(input("Enter your choice:"))
if(n==1):
	while(a!=0):
		rem=a%10
		print("Binary Representation:",rem,bin(rem).lstrip('0b'))	
		a=a//10
		
elif(n==2):
	while(a!=0):
		rem=a%10
		print("Hexadecimal Representation:",rem,hex(rem))	
		a=a//10
elif(n==3):
	while(a!=0):
		rem=a%10
		print("octal Representation:",rem,oct(rem))	
		a=a//10

else:
	print("Please enter valid number")	
