'''
Write a Program to check whether a number can be express as sum
of two prime numbers.
Input: 20
Output: 20 = 7 + 13

'''

n=int(input("Input:"))
for i in range(3,n//2):
	flag1=1
	flag2=1
	for j in range(2,i):
		if(i%j==0):
			flag1=0
			j=i
	for j in range(2,n-i):
		if((n-i)%j==0):
			flag2=0
			j=n-i
	if(flag1==1 and flag2==1):
		print(n,"=",i,"+",n-i)
		flag=1

