'''
Write a Program to print following Pattern of series white-black,
black-white, white-black, black-white
Input: Number of rows: 3
Output:
white-black black-white white-black black-white
white-black black-white white-black black-white
white-black black-white white-black black-white

'''
a='white-black'
b='black-white'
for i in range(3):
	for j in range(4):
		if(j%2==0):
			print(a,end=" ")
		else:
			print(b,end=" ")
	print(" ")
