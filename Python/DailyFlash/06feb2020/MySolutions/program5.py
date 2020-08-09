'''
Write a Program that accepts 5 integer values from user and
compares two consecutive inputs and if the second of them is lesser that the
previous one then the code exits out of loop and prints the unexpected input.
{Note: Use Break Statement}
Input: 1 3 5 4
Output: Loop is exited with input 4.

'''

n1=int(input(" "))
n2=int(input(" "))
n3=int(input(" "))
n4=int(input(" "))
n5=int(input(" "))

if(n2<n1):
	print("Loop is exited with input",n2)
	break


elif(n3<n2):
	print("Loop is exited with input",n3)
	break


elif(n3<n4):
	print("Loop is exited with input",n4)
	break

else:
	print("Loop is exited with input",n5)
	break




