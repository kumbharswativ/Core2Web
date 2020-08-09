x,y=[int(x)for x in input("Enter values of x & y:").split()]
z=int(input("Enter length of series:"))
fact=1
s=0

for i in range(1,z+1):
	fact=fact*i

	s=s+i*((x+y)/fact)

print("The addition of entered series:",s)
