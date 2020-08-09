'''
Q. Write a program to take all three sides of a triangle from user and check whether the triangle satisfies the pythagorean theorem
input:
	side1=3
	side2=4
	Hypotenuse=5
output: Triangle satisfies the pythagorean theorem.
'''

s1=int(input("Side1:"))
s2=int(input("side2:"))
h=int(input("Hypotenuse:"))

if(h*h==(s1*s1+s2*s2)):
	print("Triangle satisfies the pythagorean theorem")
else:
	print("Triangle not satisfies the pythagorean theorem")
