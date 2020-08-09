'''
Write a Program that replaces every occurrence of 1 with 2 in the
number entered by user.
Input: 121145
Output: 222245
'''
n=str(input("Input:"))
n1=list(n)
r=n.replace('1','2')
n1.clear()
n1.append(r)
print("output:",''.join(n1[:]))
