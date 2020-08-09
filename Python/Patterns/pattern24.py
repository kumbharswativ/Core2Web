'''
5 5 5 5 5  
4 4 4 4    
3 3 3      
2 2        
1       

'''
for i in range(5,0,-1):
	for j in range(5):
		if(j-i>=0):
			print(" ",end=" ")
		else:
			print(i,end=" ")
	print(" ")
