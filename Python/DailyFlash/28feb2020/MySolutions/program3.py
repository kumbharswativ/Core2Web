'''
Write a Program that accepts a number from user and prints
second minimum digit from that number.
Input: 12357798
Output: The Second minimum Digit from number 12357798 is 2
'''
n=int(input("Enter number:"))
if(n<0):
	exit(0)
min1=n%10
min2=min1
flag=0
k=0
t=n
while(n!=0):
	if(min1>=n%10):
		min2=min1
		min1=n%10
		k+=1
	elif((min2>n%10)or (flag==0 and k!=2)):
		min2=n%10
		flag=-1
		k=0
	n=n//10
if(min2!=min1):
	print("Second minimum digit from number",t,"is",min2)
else:
	print("Only one digit or all are same digit")	


