'''
Write a Program that prints Sum an Arithmetic Progression (A.P.)
series. Take Starting element, Total count of elements in A.P. & the Common
Difference from user.
Input:
Starting Element: 1
Number of Elements: 8
Common Difference: 5
Output: The AP is: 1 + 6 + 11 + 16 + 21 + 26 + 31 + 36 = 148

'''

a = int(input("Enter the first element : "))

n = int(input("Enter the number of element : "))

d = int(input("Enter the diff : "))
temp=a
i=0
sum=0

while(i<n):
	sum=sum+a
	a=a+d
	i=i+1
print("The sum of A.P:",sum,end=" ")
