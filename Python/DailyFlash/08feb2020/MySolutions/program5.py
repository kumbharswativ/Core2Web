'''
Write a Program that takes an array as input from user and prints
the array in reverse order.
Input: 1 2 3 4 5 6 7 8
Output: 8 7 6 5 4 3 2 1

'''
from array import *
list=list()
print("Enter number of elements:")
n=int(input())
for i in range(n):
	print("enter elements:")
	v=int(input())
	list.append(v)
arr1=array('i',list)
arr1.reverse()
print("reverse array is:",arr1)
