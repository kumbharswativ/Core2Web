'''
Write a Program to Print following Pattern.
a
A A 
a a a 
A A A A
a a a a a

'''
for i in range(5):
	for j in range(0,i+1):
		if(i%2==0):
			print("a",end=" ")
		else:
			print("A",end=" ")
	print(" ")
