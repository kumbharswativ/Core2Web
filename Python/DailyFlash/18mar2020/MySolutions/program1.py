'''
Write a Program that print multiplication of Series up to nth length
if user provides length.
Series: (1+1) * (2+2) * (3+3) * ... * (n+n).
Input: Enter Length of Series: 4
Output: The multiplication of Series of length 4 = 20

'''
n=int(input("Enter length of series:"))
b=0
for i in range(1,n+1):
	a=i+i
	print(i,"+",i,"=",a)
	b=b+a
print("The multiplication of series of length",n,"=",b)
