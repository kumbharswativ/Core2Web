'''
write a program to print the follwing pattern
*  *  *  *  *  *  *    
   *  *  *  *  *       
      *  *  *          
         *     
'''
for i in range(4):
	for j in range(7):
		if(i-j>=1 or i+j>=7):
			print("  ",end=" ")
		else:
			print("* ",end=" ")
	print("  ")
