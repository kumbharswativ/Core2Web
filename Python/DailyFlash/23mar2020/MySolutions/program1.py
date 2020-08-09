'''
Write a Program that print Addition of Series up to nth length if
user provides length.
Series: 1/√1*2 + 2/√2*3 + 3/√3*4 + ... + n/√n*n+1
Input: Enter Length of Series: 3
Output: The addition of Series of length 3 = 2.39

'''
n=int(input("Enter Length of series:"))
b=0
for i in range(1,n+1):
	a=i/((i*(i+1))**0.5)
	b=b+a
	
print("The addition of series of length",n,"=",b)
