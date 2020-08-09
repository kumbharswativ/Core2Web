'''
Write a Program to print sum of following series. Take the limiting
factor from user and print sum up to that element.
Series: 1, 11, 111, 1111, 11111, 111111, 111111 . . .
Input: 5
Output: The Sum is: 12345

'''
n=int(input("Input:"))
sum=0
j=1
for i in range(1,n+1):
	sum=sum+j
	j=(j*10)+1
print("the sum is:",sum)
