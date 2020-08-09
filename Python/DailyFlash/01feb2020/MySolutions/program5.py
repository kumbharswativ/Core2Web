'''
Write a Program that calculates the Greatest Common Divisor of
two entered numbers.
Input: 25 15
Output: The GCD of 25 & 15 is 5.

'''
a,b=[int(x) for x in input("Inputs:").split()]
gcd=1
for i in range(1,a+1):
	if a % i == 0 and b % i == 0:
		gcd=i
print(gcd)
