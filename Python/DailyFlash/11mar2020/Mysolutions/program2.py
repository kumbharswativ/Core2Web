'''
Write a Program that prints the Duck Numbers between 1 to 500.
Output: The Duck Numbers are: 10 20 30 40 .....

'''
for n in range(1,501):
	c=0
	temp=n
	while(n!=0):
		u=n%10
		
		if(u==0):
			c=c+1
		n=n//10
	if(c>0):
		print(temp,end=" ")

