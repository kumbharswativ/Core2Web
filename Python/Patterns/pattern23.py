'''
A B C D E  
A B C D    
A B C      
A B        
A        

'''
for i in range(1,6):
	ch=65
	for j in range(1,6):
		if(i+j>=7):
			print(" ",end=" ")
		else:
			print(chr(ch),end=" ")
			ch+=1
	print(" ")
