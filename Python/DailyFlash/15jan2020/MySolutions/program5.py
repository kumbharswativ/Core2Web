'''
Q. write a program that takes angles of a triangle from user and print whether that triangle is valid or not.
{note:Additiom of angles of triangles has to be 180 in order to consider it as a valid one}
input:30 60 70
output:The triangle with angles 30,60 & 70 is a invalid one
'''

x=int(input("enter first angle of triangle"))
y=int(input("enter second angle of triangle"))
z=int(input("enter third angle of triangle"))

add=x+y+z

if(add==180):
	print("The triangle with angles",x,y,z,"is a valid one")
else:
	print("The triangle with angles",x,y,z,"is a invalid one")
