'''
Write a Program that computes & prints Cubes of numbers entered
by user using do while loop until user enters a negative number.

'''

n=1
while(n!=0):
	v=int(input())
	if(v<0):
		break
	c=v*v*v
	print(c)
