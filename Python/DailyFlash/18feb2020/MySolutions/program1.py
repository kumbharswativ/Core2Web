'''
Write a Program to print an Arithmetic Progression (A.P.) series.
Take Starting element, Total count of elements in A.P. & the Common
Difference from user.
{Note: an AP (i.e. Arithmetic Progression is such series which has common
difference between every consecutive elements, AP of common difference 2
starting from 20 can be: 20, 22, 24, 26 . . .}
Input:
Starting Element: 1
Number of Elements: 5
Common Difference: 6
Output: The AP is: 1 7 13 19 23

'''

n=int(input("Starting element:"))
a=int(input("Number of element:"))
b=int(input("Common Difference:"))
for i in range(1,a):
	n=n+b
	
	print(n,end=" ")
