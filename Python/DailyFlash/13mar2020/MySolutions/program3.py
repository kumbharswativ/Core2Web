'''
Write a Program that computes & prints Prime Numbers entered
by user using do while loop until user enters a negative number.
Input: 1 6 2 5 3 4 -1
Output: 1 6 2 5 3 Terminating

'''
n=1
print("Input:",end=" ")
while(n!=0):
	val=int(input())
	if(val>1):
		for i in range(2,val):
			if(val%i==0):
				break
		else:
			print(val,"is prime number..terminating")
	else:
		if(val<0):
			break
