'''
Write a Program that prints the series of automorphic numbers
ranging between 1 to 60
Output: 1, 5, 6 . . .

'''
for n in range(1,61):
	if(n*n%10==n):
		print(n,end=" ")
		
