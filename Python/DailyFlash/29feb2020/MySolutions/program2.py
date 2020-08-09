
'''
Write a Program that accepts a number from user and prints the
values at following places from that number. {Value at one’s place, ten’s place,
hundreds’ place & thousand’s place if the values exists}
Input: 123
Output:
Value at ones place: 3
Value at ten’s place: 2
Value at hundreds’ place: 1

'''

list1=[int (x) for x in input("Input:")]

for i in list1:
	pass
	
print("value at hundred's place:",list1[-3])
	
print("value at ten's place:",list1[-2])
	
print("value at ones place:",list1[-1])


