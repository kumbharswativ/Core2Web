'''
Write a Program that prints the Harshad numbers ranging in 1 to
100.
Output: 1 2 3 4 5 6 7 8 9 10 12 18 20 21 24 27 30 36 40 42 45 48 50 54 60 63
70 72 80 81 84 90 100
	
'''


print("The harshed numbers between 1 to 100 are :")
for i in range(1,101):
	rem=sum=0
	n=i
	while(i>0):
		rem=i%10
		sum=sum+rem
		i=i//10
	if(n%sum==0):
		print(n,end=" ")
print()
