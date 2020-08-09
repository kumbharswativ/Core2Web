'''
Write a Program to print Fibonacci Series of 5 Elements.
{Note: In Fibonacci series next element is sum of previous two elements}
Output: 0 1 1 2 3.

'''


n1, n2 = 0, 1
count = 0
for i in range(6):
	while count < i:
		print(n1,end=" ")
		nth = n1 + n2
		n1 = n2
		n2 = nth
		count += 1
	
