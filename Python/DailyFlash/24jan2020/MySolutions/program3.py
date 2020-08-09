'''
Write a Program to print Cubes and Squares of all Odd numbers
ranges between given input number.
Input: 10
Output:
Cube of 1 : 1 and Square of 1 :1
Cube of 3 : 27 and Square of 3 :9
.
.
Cube of 9 : 729 and Square of 9 : 81

'''
n=int(input("Input:"))
for i in range(1,n+1):
	if(i%2==1):
		cube=i*i*i
		sqr=i*i
		print("cube of",i,":",cube,"and square of",i,":",sqr)
