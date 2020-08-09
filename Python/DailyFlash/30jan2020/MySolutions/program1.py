'''
Write a Program to Swap two entered number without using a
third temporary variable.
Input: 10 30
Output:
Before Swap: a = 10 & b = 20
After Swap: a = 20 & b = 10

'''

n1=int(input("Input:"))
n2=int(input("Input:"))
print("Before swap: n1=",n1,"& n2=",n2)
n1=n1+n2
n2=n1-n2
n1=n1-n2
print("After swap:n1=",n1,"& n2=",n2)
