'''
Write a Program to Print following Pattern.
7
6 5 
5 4 3
4 3 2 1
'''

for i in range(7,3,-1):
	for j in range(i-1,7):
		print(i,end=" ")
		i=i-1
	print()
