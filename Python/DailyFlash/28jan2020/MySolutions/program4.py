'''
Write a Program to Print following Pattern.
1
8 27 
64 125 216
343 512 729 1000

'''

n=1
for i in range(1,5):
	for j in range(1,i+1):
		print(n*n*n,end=" ")
		n=n+1
	print(" ")
