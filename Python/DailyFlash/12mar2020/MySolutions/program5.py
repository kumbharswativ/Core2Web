'''
Write a Program that computes perimeter of a triangle if user
enters the vertices of all three points of that triangle.
{Steps:
1. Calculate distances of all three sides of triangle using distance
formula, say a, b, & c are those distances.
2. Calculate Perimeter of circle using Hero’s Formula i.e. Perimeter P of
triangle is :
P = a + b + c
}
Input:
A (x1, y1) = 5 2
B (x2, y2) = 6 3
C (x3, y3) = 3 1
Output:
Length AB = 1.41
Length BC = 3.60
Length AC = 2.23
Perimeter of Triangle: 4.24

'''
x1,y1=[int (x) for x in input("A(x1,y1):").split()]
x2,y2=[int (x) for x in input("B(x2,y2):").split()]
x3,y3=[int (x) for x in input("C(x3,y3):").split()]
d1=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))**(0.5)
d2=((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2))**(0.5)
d3=((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1))**(0.5)
print("Length of AB=",d1)
print("Length of BC=",d2)
print("Length of AC=",d3)

p=d1+d2+d3
print(" Perimeter of Triangle:",p)
