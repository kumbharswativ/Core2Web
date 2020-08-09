'''
Write a Program to Print following Pattern.
0
1 1 
0 0 0 
1 1 1 1
0 0 0 0 0
'''
for i in range(0,5):
	for j in range(0,i+1):
		if(i%2==0):
			print("0",end=" ")
		else:
			print("1",end=" ")
	print(" ")
