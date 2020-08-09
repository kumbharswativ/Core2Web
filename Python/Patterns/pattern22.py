'''
A A A A A  
B B B B    
C C C      
D D        
E        

'''
ch=65
for i in range(1,6):
	for j in range(1,6):
		if(i+j>=7):
			print(" ",end=" ")
			
		else:
			print(chr(ch),end=" ")
	ch+=1
	print(" ")
