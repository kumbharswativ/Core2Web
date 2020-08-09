x, y=[int(x)for x in input("Enter value of x and y:").split()]
z=int(input("enter length of series:"))
fact=1
s=0
for i in range(1,z+1):
    fact=fact*i
    s=s+(i/(x+y)**i*fact)
print("The addition of enterd series is",s)

