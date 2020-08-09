'''
write a program to print the following pattern.

1  2  3  4   
4  1  2  3   
3  4  1  2   
2  3  4  1

'''

for i in range(1,5):
	for j in range(1,5):
		if(i==j):
			print("1",end="  ")
		elif(i==2 and j==1 or i==3 and j==2 or i==4 and j==3 or i==1 and j==4):
			print("4",end="  ")
		elif(i==3 and j==1 or i==4 and j==2 or i==1 and j==3 or i==2 and j==4):
			print("3",end="  ")
		else:
			print("2",end="  ")
	print(" ")
