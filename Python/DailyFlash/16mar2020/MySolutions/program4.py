'''
write a program to print the following pattern
1 2 3 4 5 6 7  
    2 3 4 5 6    
        3 4 5      
            4    
'''
for i in range(1,5):
	for j in range(1,8):
		if(i-j>=1 or i+j>=9):
			print(" ",end=" ")
		else:
			print(j,end=" ")
	print(" ")
