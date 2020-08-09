'''
Write a Program to print series of Even numbers ranging between
two numbers entered by user.
Input:
Min of Series : 4
Max of Series: 60
Output: Series Of Even Numbers Ranging between 4 & 60 is:
4, 6, 8, . . ., 60

'''
n1=int(input("min of series:"))
n2=int(input("min of series:"))
for i in range(n1,n2):
	if(i%2==0):
		print(i,end=" ")




