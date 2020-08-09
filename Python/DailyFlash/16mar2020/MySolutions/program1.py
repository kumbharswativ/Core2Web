'''
Write a Program that prints all the prime factors of a number
entered by user.
Input: 10
Output: Prime Factors of 10 are 2, 5

'''
n=int(input("Input:"))
i=1
while(i<=n):
	k=0
	if(n%i==0):
		j=1
		while(j<=i):
			if(i%j==0):
				k+=1
			j+=1
		if(k==2):
			print(i)
	i+=1
