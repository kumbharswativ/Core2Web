'''
Write a Program to that accepts 10 integers from user and breaks
the loop of accepting numbers if user enters a negative number.
{Note: Use Break Statement}
Input: 1 2 3 4 -6
Output: Negative Number Entered, Exiting The Loop!

'''
List = []
n = int(input("Enter the list size : "))
for i in range(0, n):
	print("Enter number at location", i, ":")
	var = int(input())
	List.append(var)
	if(List[i]<0):
		print("Negative Number Entered, Exiting The Loop!")
		break

