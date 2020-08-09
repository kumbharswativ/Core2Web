'''
Write a Program calculates slope of a line if user provides the Two
Points A & B of that line.
{Note: Slope of a line is computed as m = ((y2-y1)/(x2-x1)) }
Input:
Point A (x1, y1) = 5 2
Point B (x2, y2) = 8 1
Output: Slope of line AB is 3

'''

x1,y1=[int(x) for x in input("Point A(x1,y1)=").split( )]
x2,y2=[int(y) for y in input("Point B(x2,y2)=").split( )]

m=(y2-y1)/(x2-x1)

print("Slope of line AB is",m)


