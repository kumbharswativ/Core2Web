'''
Write a Program that accepts a number from user and stores every
digit from that number into an array.
Input: 3462
Output: Number Stored In Array: 3 4 6 2

'''
from array import *
list1=[int(x) for x in input("Input:")]
arr1=array('i',list1)
for i in arr1:
	print(i,end=" ")
