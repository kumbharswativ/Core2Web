n=int(input("Enter legth of series:"))
fact=1
s=0
for i in range(1,n+1):
	fact=fact*i
	s=s+(1/fact)
print("The addition of the entered series is:",s)
