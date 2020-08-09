'''
Write a Program that takes a number as input from user and prints
only those digits from that number, which are prime in nature.
Input: 141
Output: The Prime Digits from the Number 141 is 1, 1.

'''
n=int(input("Input:"))
temp=n
print("The prime digit from the number",n,"is:")
while(temp>0):
	count=0
	a=temp%10
	for i in range(2,a):
		if(a%i==0):
			count+=1
	if(count==0):
		print(a,end=" ")
	temp=temp//10
print(" ")
