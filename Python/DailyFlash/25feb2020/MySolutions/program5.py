'''
Write a Program calculates mid-point of a line made up of two
points A (4, 5) & B (2, 4).
{Note: mid (X, Y) = { (( x1 + x2) / 2), ((y1 + y2) / 2) } }
Output: Mid-Point of Line AB = (3, 4.5)

'''
print("Enter coordinates of the line A B")
x1,y1=[int (x) for x in input("x1,y1:").split()]
x2,y2=[int (y) for y in input("x2,y2:").split()]
mid1=(x1+x2)/2
mid2=(y1+y2)/2
print("Mid-Point of Line AB:","(",mid1,",",mid2,")")
