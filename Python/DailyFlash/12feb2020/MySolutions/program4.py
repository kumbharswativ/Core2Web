'''
  write a program to draw the following pattern
ssss  	   
	    9  
         9 16  
      9 16 25  
   9 16 25 36  

'''

for i in range(7):
	for j in range(7-i,0,-1):
		print(" ",end="  ")
	for j in range(3,i+1):
		print(j*j,end=" ")
		
	print(" ")
	
		




