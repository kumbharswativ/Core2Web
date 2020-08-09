'''
Write a Program that takes Height (h) & Base (b) of a Triangle and
calculates area (A) of that Triangle.
{Steps: To Calculate Area of Triangle, we can use formula:
A = 1/2bh
Where:
A is area of triangle
b is base of that triangle
h is height of that triangle
}
Input:
Enter Height of Triangle: 3
Enter Base of Triangle : 4
Output: The Area of Triangle is : 6

'''
h=int(input("Enter Height of Trianle:"))
b=int(input("Enter Base of Triangle:"))
a=1/2*b*h
print("The area of triangle is:",a)
