'''
Write a Program that accepts N numbers from user and calculates
Average, Variance or Standard Deviation of that distribution of numbers on
user choice. Say used enters 1 then calculate average, 2 for Variance & 3 for
Standard Deviation, make program menu driven and must not terminate
unless user wants to exit from program by pressing (Y|y)
Input:
Enter size of distribution of numbers : 5
Enter 5 Numbers: 1 2 3 4 5 6
Choose Operation:
1 : Calculate Average
2 : Calculate Variance
3 : Calculate Standard Deviation
Want to Continue? (Press Y or N)

'''

val=int(input("Enter Value N:"))
sum=0
for i in range(val+1):
	num=int(input("Enter value:"))
	sum=sum+num
n=int(input("Choose operation:"))
a=sum/n
v=sum/a
sd=a**0.5	
if(n==1):
	
	print(a)
elif(n==2):
	
	print(v)
elif(n==3):
	
	print(sd)
else:
	print("Please enter correct option")
		
