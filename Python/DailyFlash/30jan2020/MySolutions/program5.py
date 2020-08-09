'''
Write a Program that calculates addition of two complex numbers.
Input:
Enter Number 1:
Real Part: 5
Imaginary Part: 3
Enter Number 2:
Real Part: 2
Imaginary Part: 1
Output: The Addition of 5+3i & 2+I is 7+4i.

'''

print("Enter Number 1:")
real=int(input("Real part:"))
img=int(input("Imaginary part:"))
print(complex(real,img))

print("Enter Number 2:")
real1=int(input("Real part:"))
img1=int(input("Imaginary part:"))
print(complex(real1,img1))
add=complex(real,img)+complex(real1,img1)
print("The addition of",complex(real,img),"&",complex(real1,img1),"is",add)

