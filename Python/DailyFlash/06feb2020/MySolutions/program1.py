'''
Write a Program to print Fibonacci Series of N elements. Where n is
a number entered by user.
Output: 0 1 1 2 3 5 8 13 21 34

'''
n=int(input("Input:"))
n1,n2 = 0,1
count = 0
for i in range(n+1):
	while count < i:
		print(n1,end=" ")
		nth = n1 + n2
		n1 = n2
		n2 = nth
		count += 1
	
