'''
Write a Program that takes a number as input from user and prints
the counts the occurrence of even digits from it
Input: 123458
Output: The number 123458 has 3 Even digits.

'''

num=int(input("Input:"))
count=0
temp=num
while(num>0):
	num=num//10
	if(num%2==0):
		count=count+1
print("The number",str(temp),"has",str(count)," even digits")   
