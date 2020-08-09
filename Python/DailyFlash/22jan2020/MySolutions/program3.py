'''
Write a program that accepts two integers from user and prints
addition of their Cubes and subtraction of their Squares.
Input: 10 20
Output:
Addition of 1000 & 8000 is 9000
Subtraction of 100 & 400 is -300

'''
n1=int(input("Input:"))
n2=int(input("Input:"))

cn1=n1*n1*n1
cn2=n2*n2*n2

add=cn1+cn2
print("Addition of",cn1,"&",cn2,"is",add)


sn1=n1*n1
sn2=n2*n2

sub=sn1-sn2
print("Substraction of",sn1,"&",sn2,"is",sub)



