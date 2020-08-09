'''
Write a Program that accepts all three points of a triangle from
user and computes any of the operation listed in menu, if user provides the
option associated with key.
Menu:
1: Calculate Distances of each side of Triangle
2: Calculate Perimeter of Triangle
3: Area of Triangle
4: Radius of In-Circle to be drawn inside the Triangle.
5: Centre of in-circle enclosed under triangle
{E.g. user enters 2: Display the Perimeter of Triangle}
Input:
A (x1, y1) = 5 2
B (x2, y2) = 6 3
C (x3, y3) = 3 1
Press Key to Choose Operation: 3
Output:
Area of Triangle = 0.47165 2

'''
x1,y1=[ float(x) for x in input("A(x1,y1):").split()]
x2,y2=[float (x) for x in input("B(x2,y2):").split()]
x3,y3=[float (x) for x in input("C(x3,y3):").split()]

d1=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))**(0.5)
d2=((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2))**(0.5)
d3=((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1))**(0.5)

p=d1+d2+d3

s=p/2

a=(s*(s-d1)*(s-d2)*(s-d3))**(0.5)

r=(a/s)

x=((d2*x1)+(d3*x2)+(d1*x3))/p
y=((d2*y1)+(d3*y2)+(d1*y3))/p

n=int(input("Press key to choose operation:"))

if(n==1):	
	print("The distance of each side of triangle is:")
	print("Length of AB=",d1)
	print("Length of BC=",d2)
	print("Length of AC=",d3)
	
elif(n==2):
	print(" Perimeter of Triangle:",p)
		
elif(n==3):
	print("Area of triangle=",a)
	
elif(n==4):
	print("Radius of In-circle=",r)

elif(n==5):
		print("center of In-circle=",x,y)

else:
	print("Enter correct menu")
	

