'''
Write a Program to print sum of series up to the nth entered
number.
Series is: 9, 99, 999, 9999, 9999 . . .. n.
Input: Nth Element in series: 5
Output: the sum of: 9 + 99 + 999 + 9999 + 99999 = 111105

'''

t=9
sum=0
n=int(input("Nth element in series:"))
print("The sum of:")
for i in range(n):
	sum=sum+t
	print(t,end=" ")	
	t=t*10+9

print("=",sum)

