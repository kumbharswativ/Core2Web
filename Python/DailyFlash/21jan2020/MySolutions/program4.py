'''
Write a Program that accepts an integer from user and print table
of that number.
Input: 4
Output: 4 8 12 16 20 24 28 36 40
'''
x=int(input("Input:"))
for i in range(x,x*11):
	if(i%x==0):
		print(i,end=" ")
