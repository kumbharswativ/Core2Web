'''
Write a Program to print series of odd numbers ranging between
two numbers entered by user.
Input:
Min of Series : 4
Max of Series: 60
Output: Series Of Odd Numbers Ranging between 4 & 60 is:
5, 7, 9, . . ., 59

'''

a=int(input("Input:"))
b=int(input("Input:"))
for i in range(a,b):
	if(i%2==1):
		print(i,end=" ")
