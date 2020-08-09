'''
Write a Program that prints the Harshad numbers bounding
between numbers entered by user.
Input:
Lower Bound: 1
Upper Bound: 100
Output: 1 2 3 4 5 6 7 8 9 10 12 18 20 21 24 27 30 36 40 42 45 48 50 54 60 63
70 72 80 81 84 90 100

'''
a=int(input("Lower Bound:"))
b=int(input("upper Bound:"))
for i in range(a,b+1):
	rem=sum=0
	n=i
	while(i>0):
		rem=i%10
		sum=sum+rem
		i=i//10
	if(n%sum==0):
		print(n,end=" ")
print()
