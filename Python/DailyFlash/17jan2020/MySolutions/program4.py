'''
Q.write a program to print following pattern
	2 4 6 8
	2 4 6 8
	2 4 6 8
	2 4 6 8
'''

for x in range(1,5):
	for y in range(1,9):
		if(y%2==0):
			print(y,end=" ")
	print(" ")
