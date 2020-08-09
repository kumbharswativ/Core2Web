'''
Write a Program to that prints series of Prime number ranging
between 1 to 100.
Output: 1 2 3 5 . . .
'''

for i in range(1,101):
	if(i>1):
		for j in range(2,i):
			if(i%j==0):
				break
		else:
			print(i,end=" ")





















