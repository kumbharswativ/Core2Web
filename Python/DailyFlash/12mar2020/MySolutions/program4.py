'''
write a program to print the following pattern
              D        
          C D E      
       BC D E F    
   A B C D E F G  

'''
for i in range(4):
	
	for j in range(7):
		
		if(i+j<=2 or j-i>=4):
			print(" ",end=" ")
		else:
			print(chr(65+j),end=" ")
			
		
	print(" ")
	
