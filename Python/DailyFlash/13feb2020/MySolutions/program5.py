'''
Write a Program that takes a number as input from user and prints
the counts the occurrence of Odd Digits & Even Digits from it
Input: 123458c  
Output:
The number 123458 Contains 3 Odd Digits & 3 Even Digits.

'''
num=int(input("Input:"))
count1=0
count2=0
while(num>0):
	rem=num%10
	if(rem%2==1):
		count1+=1
	else:
		count2+=1
	num=num//10
	
print("The number contains",count2,"odd digits",end=" ")
print("and",count1,"even digits",end=" ") 
