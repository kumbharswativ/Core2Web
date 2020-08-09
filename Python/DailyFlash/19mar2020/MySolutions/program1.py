'''
Write a Program that print multiplication of Series up to nth length
if user provides length.
Series: (1) + (1+2) * (1+2+3) * ... * (1+2+3+4+...+n).
Input: Enter Length of Series: 4
Output: The multiplication of Series of length 4 = 20

'''
x=int(input("Enter length of series:"))
sum1=0
for i in range(1,x+1):
	sum=0
	for j in range(1,i+1):
		sum=sum+j
	sum1=sum1+sum
print(sum1)
