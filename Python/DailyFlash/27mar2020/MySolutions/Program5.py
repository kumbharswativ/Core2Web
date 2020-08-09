x1,y1=[int(x)for x in input("A(x1,y1):").split()]
x2,y2=[int(y)for y in input("A(x2,y2):").split()]
x3,y3=[int(z)for z in input("A(x3,y3):").split()]

b=int(input("Enter base:"))
h=int(input("Enter Height:"))
A=1/2*(b/h)

a=(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))**0.5)
b=(((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2))**0.5)
c=(((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1))**0.5)

s=a+b+c/2

H=((s*(s-a)*(s-b)*(s-c))**0.5)

print("Height of triangle =",H)
