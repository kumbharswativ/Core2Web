'''
E D C B A  
E D C B    
E D C      
E D        
E       

'''
for i in range(5):
	ch=69
	for j in range(5):
		if(i+j>=5):
			print(" ",end=" ")
		else:
			print(chr(ch),end=" ")
			ch-=1
	print(" ")
