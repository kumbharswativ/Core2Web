'''
1 2 3 4 5  
1 2 3 4    
1 2 3      
1 2        
1        
'''
for i in range(1,6):
	for j in range(1,6):
		if(i+j>=7):
			print(" ",end=" ")
		else:
			print(j,end=" ")
	print(" ")