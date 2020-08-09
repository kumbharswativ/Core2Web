'''
Write a Program to Print following Pattern.
  				  *	   	   	   	   	    
 	   	   	  *	  *	  *	   	   	   	    
 	   	  *	  *	  *	  *	  *	   	   	    
 	  *	  *	  *	  *	  *	  *	  *	   	    
*	  *	  *	  *	  *	  *	  *	  *	  *	

'''
for i in range(5):
	for j in range(9):
		if(i+j<=3 or j-i>=5):
			print(" \t",end="  ")
		else:
			print("*\t",end="  ")
	print("  ")
	
