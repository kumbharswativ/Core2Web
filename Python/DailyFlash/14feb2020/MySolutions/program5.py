'''
Write a Program that takes a number as input from user and prints
the counts the occurrence of 1’s from it.
Input: 1211234
Output:
The number 1211234 Contains 3 One’s.

'''

n=int(input("Input:"))
a=1
count=0
temp=n
while(temp>0):
	if(temp%10==a):
		count=count+1
	temp=temp//10
		
print("The number",n," contains",count,"one's")
		
