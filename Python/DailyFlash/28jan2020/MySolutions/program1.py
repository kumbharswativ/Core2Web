'''
Write a Program which detects whether the entered number is
perfect or not .
{Note: If sum of perfect divisors of number is equal to the entered number
than it is considered as perfect one.}
Input : 6
Output : 6 is a Perfect number.

'''

num = int(input("Enter a number : "))
sum = 0
for i in range (1,num):
	if(num % i == 0):
		sum = sum + i
if(sum == num):
	print(num,"is a perfect number")
else:
	print(num,"is not a perfect number")

