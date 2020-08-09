'''
Write a Program that accepts an integer from user and print Sum of
all number up to entered number .
Input: 10
Output: The s um number up to 10 : 55
'''

n=int(input("Input:"))
for i in range(1,n):
	n=n+i
print(n)
