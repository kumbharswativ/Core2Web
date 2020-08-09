'''
Write a Program to Print following Pattern.
1
4 9 
16 25 36
49 64 81 100

'''
num=1
for i in range(0,4):
	for j in range(0,i+1):
		print(num*num,end=" ")
		num=num+1
	print(" ")

