'''
E E E E E  
D D D D    
C C C      
B B        
A       

'''

ch=69
for i in range(5):
	
	for j in range(5):
		if(i+j>=5):
			print(" ",end=" ")
		else:
			print(chr(ch),end=" ")
	ch-=1
	print(" ")
