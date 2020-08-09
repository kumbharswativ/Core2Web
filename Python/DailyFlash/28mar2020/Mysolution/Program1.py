x,y=[int(x) for x in input("x,y=").split()]
n=int(input("Enter length of series:"))
a=0
for i in range(1,n+1):
	s=(x+y)**i
	a=a+s
print(a)
