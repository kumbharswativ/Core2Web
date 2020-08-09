'''
Write a Program that computes sum of all possible divisors of an
entered number.
Input: 25
Output: The of all possible divisors of 24 is : 39

'''
sum=0
n=int(input("Input:"))
for i in range(1,n):
	if(n%i==0):
		sum=sum+i
print(sum,end=" ")
