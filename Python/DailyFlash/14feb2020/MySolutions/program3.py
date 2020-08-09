'''
Write a Program to that accepts an integer value from user and
prints the Average of all the
Input: 1234
Output: The Average of digits from number 1234 is 5

'''

num=int(input("Enter total Numbers:"))
sum=0
for i in range(num):
	n=int(input("Enter numbers:"))
	sum=sum+n
avg=sum/num
print("The average of digits from number :",avg) 
