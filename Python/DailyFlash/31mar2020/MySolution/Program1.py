n=int(input("Enter length of series:"))
fact=1
s=0
for i in range(1,n+1):
	fact=fact*i
	s=s+(i/fact)
print("The addition of entered seris is :",int(s))
