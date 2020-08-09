
'''
Write a Program that takes a number as input from user and prints
it into words.
Input: 1234
Output: One Two Three Four

'''


list1=[int(x) for x in input("Input:")]
for i in list1:

	if(i==1):
		print("one",end=" ")
	elif(i==2):
		print("Two",end=" ")
	elif(i==3):
		print("Three",end=" ")
	elif(i==4):
		print("Four",end=" ")
	elif(i==5):
		print("Five",end=" ")
	elif(i==6):
		print("six",end=" ")
	elif(i==7):
		print("Seven",end=" ")
	elif(i==8):
		print("Eight",end=" ")
	elif(i==9):
		print("Nine",end=" ")
	else:
		print("Zero",end=" ")

	


