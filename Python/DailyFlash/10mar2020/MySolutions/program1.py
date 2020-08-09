'''
Write a Program that Checks whether a number entered by user is
an Automorphic Number or Nor.
{An Automorphic Number is such a number, whose Square ends with that
number itself. e.g. 5 is Automorphic number. Square of 5 is 25 which satisfies
the condition}
Input: 6
Output: 6 is An Automorphic Number.

'''
n=int(input("Input:"))
s=n*n
while(s!=0):
	u=s%10
	
	if(u==n):
		print(n,"is An Automorphic Number.")
		break
	else:
		print(n,"is not An Automorphic Number.")
		break
