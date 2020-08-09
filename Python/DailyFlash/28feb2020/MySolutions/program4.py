'''
write a program to print the following pattern

0A 1B 2C 3D  
1A 2B 3C    
2A 3B      
3A        

'''
for i in range(4):
	for j in range(4):
		if(i+j>=4):
			print(" ", end = " ")
		else:
            		print(str(i+j)+chr(65+j),end = " ")
			
	print(" ")
	
