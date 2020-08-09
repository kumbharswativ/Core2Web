'''
write a program to print the following  pattern
             0        
         2 3 4      
     2 4 6 8 10    
 0 3 6 9 12 15 18  

'''
for i in range(4):
	a=0
	b=1
	for j in range(7):
		if(i+j<=2 or j-i>=4):
			print(" ",end=" ")
		else:
			if(i==0):
				print("0",end=" ")
			elif(i==1):
				print(b+1,end=" ")
			elif(i==2):
				print(b*2,end=" ")
			
			elif(i==3):
				
				print(a*3,end=" ")
			a+=1
			b+=1
	print(" ")
