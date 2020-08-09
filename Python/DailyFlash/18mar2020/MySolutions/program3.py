'''
Write a Program that computes & prints each Numbers entered by
user using do while loop until user enters a Strong Number.
Input: 10 6 22 50 301 145
Output: 10 6 22 50 301 Terminating

'''
n=1
while(n!=0):
	val=int(input("Input:"))
	sum=0
	temp=val
	while(val):
		i=1
		fact=1
		rem=int(val%10)
		while(i<=rem):
			fact=fact*i
			i=i+1
		sum=sum+fact
		val=int(val//10)
	if(sum==temp):
		print("Terminating")
		break
	else:
		print(temp)

