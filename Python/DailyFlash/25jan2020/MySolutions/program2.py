'''
Write a Program which accepts two integers from user and swaps
their insertion order.
Input : 20 30
Output :
Before Swap : 20 30
After Swap : 30 20

'''
a=0

n1=int(input("Input:"))
n2=int(input("Input:"))
print("Before swap:",n1,n2)
a=n1
n1=n2
n2=a
print("After swap:",n1,n2)	
