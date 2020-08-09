'''
Write a Program that accepts N numbers from user and calculates
Average of those numbers.
{Steps: we can calculate Average of numbers using following formula.
Average (a) = sumOfNumbers / countOfNumbers
}
Input:
Enter Value N: 5
Enter Values: 1 2 4 5 6
Output: Average (a) of Numbers = 3.6

'''
n=int(input("Enter Value N:"))
sum=0
for i in range(n):
	num=int(input("Enter value:"))
	sum=sum+num
a=sum/n
print(a)
