x,y=[int(x) for x in input("Enter values of x & y:").split()]
z=int(input("Enter length of series:"))
sum=0
for i in range(1,z+1):
	if(i%2==0):
		num=i/((x+y)**y)
	else:
		num=i/((x+y)**x)
	sum=sum+num
print("The addition of series is:",sum)
