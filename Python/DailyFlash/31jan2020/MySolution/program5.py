'''
Write a Program that prints series of perfect numbers up to the
entered limiting number.
Input: 100
Output: The Series of all perfect number from 1 to 10 is
1, 6, 28

'''



n=int(input("Inputs:"))

print("The series of perfect number from 1 to 100 is:")

for i in range(1,n+1):
	sum=0
	for x in range(1,i):
		if(1%x==0):
			sum=sum+x
	if(sum==i):
		print(i)
