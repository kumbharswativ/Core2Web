'''
Write a Program that computes & prints Perfect Numbers entered
by user using do while loop until user enters a negative number.
Input: 1 6 2 5 3 1 -1
Output: 1 6 Terminating

'''
n=1
print("Input:",end=" ")
while(n!=0):
	val=int(input())
	sum=0
	for i in range(1,val):
		if(val%i==0):
			sum+=i
	if(sum==val):
		print(val,"terminating")
	if(val<0):
		break
