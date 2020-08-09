'''
Write a Program that accepts a String from user. Print Only ASCII
values Vowels from that String.
Input: HELLO WORLD
Output:
ASCII of Vowels from entered String :
O : 79
O : 79

'''
s= input("Input: ")
for i in s:
	if i in("A","E","I","O","U"):
		print(ord(i),end = " ")

