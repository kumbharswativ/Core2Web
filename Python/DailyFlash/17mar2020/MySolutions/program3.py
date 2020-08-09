'''
Write a Program that computes & prints each Numbers entered by
user using do while loop until user enters an Armstrong Number.
Input: 10 6 22 50 301 153
Output: 10 6 22 50 301 Terminating

'''
n=1

while(n!=0):
	val=int(input("Input:"))
	sum=0
	temp=val
	while(temp>0):
		digit=temp%10
		sum+=digit**3
		temp//=10
	if(val==sum):
		print("Terminating")
		break
	else:
		print(val)

