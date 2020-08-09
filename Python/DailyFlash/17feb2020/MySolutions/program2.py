'''
Write a Program to display a number in reverse order.
Input: 123456
Output: 654321

'''


num=int(input("Input:"))
rev=0
while(num>0):
	rem=num%10
	rev=(rev*10)+rem
	num=num//10
print("output:",rev)   
