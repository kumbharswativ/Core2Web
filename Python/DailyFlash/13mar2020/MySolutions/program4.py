'''
write a program to print the following pattern 
           #            
      *   #  *         
   *  *  #  *  *      
*  *  * #  *  *  *   

'''
for  i in range(4):
	for j in range(7):
		if(i+j<=2 or j-i>=4):
			print(" ",end="  ")
		else:
			if(j==3):
				print("#",end="  ")
			else:
				print("*",end="  ")
	print(" ")
