'''
Write a Program to that skips the occurrence of numbers that are
divisible by 2 using continue statement. Print this sequence up to 100.
Output: 1 3 5 7 9 11 13

'''
for i in range(1,101):
	if(i%2==0):
		continue
	print(i,end=" ")
	
