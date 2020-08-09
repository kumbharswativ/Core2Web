'''
Write a Program that print Addition of Series up to nth length if
user provides length.
Series: 0 + π/6 + π/6 + π/2 + ... + 2 π.
(where π = 3.142)
Input: Enter Length of Series: 3
Output: The addition of Series of length 3 = 1.52

'''
n=int(input("Enter Length of Series:"))
a=0
for i in range(6,n,-2):
	p=(3.142)/i
	a=a+p
	print(p)
print("The addition of Series:",a)
