'''
Write a Program to print series of Deficient Numbers up to nth
element. Where n is number entered by user.

'''
n=int(input("Input:"))

sum=0
for i in range(1,n):
	for j in range(1,i):
	
		if(i%j==0):
			sum=sum+j
		
	if(sum<i):
		print(i,end=" ")
	sum=0
