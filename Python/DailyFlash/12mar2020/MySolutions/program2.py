'''
Write a Program that swaps first digit with last digit of a number
entered by user.
Input: 12345
Output: 52341

'''

list1=list(str(x)for x in input(" Input:"))
var=list1[0]
list1[0]=list1[len(list1)-1]
list1[len(list1)-1]=var
for i in range(1):
	
	print(''.join(list1[i:]))
