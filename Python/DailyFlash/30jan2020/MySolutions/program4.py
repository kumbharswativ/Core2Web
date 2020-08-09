'''
Write a Program to Print following Pattern.
7
7 6 
6 5 4
4 3 2 1

'''

for i in range(1,5,1):
	for j in range(i+1):
		
		if(j<i):
			print(j+1,end=" ")
		
			
	print(" ")

