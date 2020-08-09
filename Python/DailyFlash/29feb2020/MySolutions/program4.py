'''

write a program to print the following pattern

0 1 0 1  
0 1 0    
0 1      
0
        
'''

for i in range(4):
	for j in range(4):
		if(i+j>=4):
			print(" ",end=" ")
		else:
			if(j%2==0):
				print("0",end=" ")
			else:
				print("1",end=" ")
	print(" ")
