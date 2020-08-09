'''
Write a Program to that skips the occurrence of perfect numbers
using continue statement. Print this sequence up to 100.
Output: 1 2 3 4 5 7 8 9. . . . .

'''

n=101
for i in range(1,n+1):
	sum=0
	for x in range(1,i):
		if(i%x==0):
			sum=sum+x
	
	if(sum==i):
		continue
	else:
		print(i,end=" ")


