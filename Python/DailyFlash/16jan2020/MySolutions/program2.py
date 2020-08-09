'''
Q.write a program to calculate simple interest. Taking all essential terms to compute as input.
'''

p=float(input("Enter principal amount"))
r=float(input("Enter rate of interest"))
n=int(input("Enter number of periods "))

si=(p*r*n)/100

print("simple interest=",si)
