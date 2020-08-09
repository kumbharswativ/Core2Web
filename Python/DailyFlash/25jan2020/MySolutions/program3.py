'''
Write a Program to print Cubes and Squares of all Even numbers
ranges between given input number.
Input: 10
Output:
Cube of 2 : 8 and Square of 2 : 4
Cube of 4 : 64 and Square of 4 : 16
.
.
Cube of 10 : 1000 and Square of 10 : 100

'''

n=int(input("Input:"))
for i in range(1,n+1):
	if(i%2==0):
		cube=i*i*i
		sqr=i*i
		print("Cube of",i,":",cube,"and square of",i,":",sqr)
