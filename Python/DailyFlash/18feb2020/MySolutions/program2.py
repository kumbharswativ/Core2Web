'''
Write a Program that sums up all the digits from an entered
number and finds average of that sum and print them both.
Input: 12345
Output:
Sum of Digits from 12345: 15
Average of sum of digits from 12345: 3

'''
x=int(input("Enter no of element:"))
n=int(input("Input:"))
temp=n
sum=0
for i in range(x):
	while(n>0):
		a=n%10
		sum=sum+a
		avg=sum/x
		n=n//10	
	
print("sum of digit from",str(temp),":",str(sum))
print("Average of sum oof digits from",str(temp),":",str(avg))
