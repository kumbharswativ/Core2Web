'''
Write a Program that replaces every occurrence of n1 with a digit
n2from that number if user provides the number & digit n1 to replace and digit
n2 to replace with n1.
Input:
Enter Number: 121145
Enter Digit from number to replace: 5
Enter Digit to replace with 5: 4
Output: 121144

'''
n=str(input("Enter Number:"))
b=str(input("Digit from number to replace:"))
a=str(input("Enter digit to replace with:"))
n1=list(n)
r=n.replace(b,a)
n1.clear()
n1.append(r)
print("output:",''.join(n1[:]))
