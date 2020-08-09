'''
Write a Program to print table in reverse order.
Input : 2
Output :
2 X 10 = 20
2 X 9 = 18
2 X 8 = 16
.
.
2 X 1 = 2

'''

n=int(input("Input:"))
for i in range(10,0,-1):
	a=i*n
	print(n,"X",i,"=",a)
	
