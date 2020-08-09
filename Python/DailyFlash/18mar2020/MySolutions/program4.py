'''
write a program to print the following pattern
*   0   *   0   *   0   *     
     0   *   0   *   0         
           *   0   *             
                0       
'''
for i in range(4):
	for j in range(7):
		if(i-j>=1 or i+j>=7):
			print("   ",end=" ")
		else:
			if(j%2==0):
				print(" * ",end=" ")
			else:
				print(" 0 ",end=" ")
	print("   ")
