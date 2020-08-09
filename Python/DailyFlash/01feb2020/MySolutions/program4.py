'''
Program 4: Write a Program to Print following Pattern.
+ = + = 
+ = +
+ =
+

'''

for i in range(3,-1,-1):
	for j in range(0,i+1):
		if(j%2==0):
			print("+",end=" ")
		else:
			print("=",end=" ")
	j=j-1
		
	print(" ")

	
