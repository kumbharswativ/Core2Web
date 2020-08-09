'''
Write a Program that accepts a number from user and prints
minimum & maximum digit from that number.
Input: 12357798
Output: Minimum Digit is 1 & Maximum Digit is 9

'''

list1=[]

a=int(input("Enter total number of elements:"))
for i in range(a):
	print("Enter elements:")
	var=int(input())
	list1.append(var)
print(list1)


minElement=list1[0]
maxElement=list1[0]

for x in list1:
	
	if(minElement>x):
		minElement=x
	
	if(maxElement<x):
		maxElement=x

print("Minimum digit is",minElement,"maximum digit is",maxElement)

