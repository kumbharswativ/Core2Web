x,y=[int(x)for x in input("Enter values of x & y:").split()]
z=int(input("Enter length of series:"))
fact=1
b=0
for i in range(1,z+1):
	fact=fact*i
	s=((x+y)**i)*fact
	b=b+s
print("The addition of entered series is:",b)
