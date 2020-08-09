'''
Write a Program that computes & prints Factorials of numbers
entered by user using do while loop until user enters a negative number.

'''
a=1
while(a!=0):
	fact=1
	
	n=int(input("Input:"))
	for i in range(1,n+1):
		fact=fact*i

	if(n<0):
		break	
	print(fact)
