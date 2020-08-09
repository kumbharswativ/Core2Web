'''
Write a Program that accepts a number from user and prints
Maximum element from that array.
Input: Length of Array: 6
Enter Elements in Array: 1 2 3 14 5 6
Output: Maximum Element Entered In That Array : 14

'''

from array import *
list1=[int(x) for x in input("Input:").split()]
arr=array('i',list1)
max = arr[0]
for i in range(0, len(arr)): 
	if(arr[i] > max):
		max = arr[i] 
print("Largest element present in given array: " + str(max))
	


