'''
Write a Program that prints whether a number entered by user is
Disarium Number or not.
{Note: A number can be termed as Disarium number if the sum of every digits
raised by their position in that number is equal to that number. E.g. 135, 1 is at
position 1, 3 is at position 2 & 5 is at position 3, then 1^1 + 3^2 + 5^3 = 1 + 9 +
125 = 135, so 135 is a Disarium Number}
Input: 89
Output: 89 is a Disarium Number.

'''

list1=[]
z=int(input("Input:"))
num=z
while(z>0):
	u=z%10
	list1.append(u)
	z=z//10
list1.reverse()

n=1
x=len(list1)

sum=0
for i in range(x):
	sum=sum+list1[i]**n
	n=n+1
if(num==sum):
	print(num,"is disarium number")
else:
	print(num,"is not disarium number")
