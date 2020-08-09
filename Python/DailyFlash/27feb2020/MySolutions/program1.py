'''
Write a Program that prints the Series of palindrome bounding
between limits entered by user.
Input:
Lower Bound: 300
Upper Bound: 350
Output: 303, 313, 323, 333, 343

'''

for i in range(300,351):
	temp=i
	rev=0
	while(temp>0):
		u=temp%10
		rev=(rev*10)+u
		temp=temp//10
	if(i==rev):
		print(i,end=" ")
