'''
Write a Program calculates Distance between two points of a line,
if user provides Point A & Point B of that line.
{Note: Distance of a line is computed as d(line) =√(x2-x1) 2 + (y2-y1) 2 }
Input:
Point A (x1, y1) = 5 1
Point B (x2, y2) = 8 1
Output: Distance d(AB) = 3

'''

x1,y1=[int (x) for x in input("A(x1,y1):").split()]
x2,y2=[int (y) for y in input("B(x2,y2):").split()]
d=int(((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))**(0.5))
print("Distance d(AB)=",d)
