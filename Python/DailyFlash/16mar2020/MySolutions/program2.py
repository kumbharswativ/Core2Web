'''
Write a Program that replaces every occurrence of 1 with a digit N
from that number if user provides both the number & digit N to replace with 1.
Input:
Enter Number: 121145
Enter Digit to replace with 1: 5
Output: 525545

'''
n=str(input("Input:"))
a=str(input("Enter digit to replace with 1:"))
n1=list(n)
r=n.replace('1',a)
n1.clear()
n1.append(r)
print("output:",''.join(n1[:]))
