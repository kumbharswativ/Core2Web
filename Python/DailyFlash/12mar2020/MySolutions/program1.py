'''
Write a Program that prints the series of automorphic numbers
ranging between upper limit and lower limit entered by user.
Input: 1 10
Output: The automorphic numbers ranging between 1 to 10 are 1 4 6

'''
a=int(input("Lower limit:"))
b=int(input("Upper Limit:"))
for n in range(a,b+1):
	if(n*n%10==n):
		print(n,end=" ")
		
