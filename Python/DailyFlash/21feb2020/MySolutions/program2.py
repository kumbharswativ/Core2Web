'''
Write a Program that prints octal value of Each Digit from entered
Number.
Input: 82
Output:
Binary of 8: 10
Binary of 2: 2

'''

n=int(input("Input:"))
temp=n
while(n!=0):
	u=n%10
	print("Ocatl Representation of",u,":",oct(u).lstrip('0o'))
	n=n//10

