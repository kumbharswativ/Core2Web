'''
Write a Program to that accepts an integer value from user and
prints the sum of all digits from that number.
Input: 15895
Output: The sum digits from numbers 15895 is 28

'''
num=int(input("Input:"))
a=0
temp=num
while(num>0):
	rem=num%10
	a=a+rem
	num=num//10
	
print("The sum digits from",temp,"is",a) 
