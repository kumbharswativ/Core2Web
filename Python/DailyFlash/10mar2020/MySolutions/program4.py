'''
write a program to print the following pattern
        A        
    A B C      
  A B C D E    
A B C D E F G  

'''

for i in range(4):
	n=65
	for j in range(7):
		
		if(i+j<=2 or j-i>=4):
			print(" ",end=" ")
		else:
			print(chr(n),end=" ")
			n+=1		
	print(" ")
	
	
