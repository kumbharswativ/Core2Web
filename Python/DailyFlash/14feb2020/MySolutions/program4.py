'''
Write a Program to Print following Pattern.
      #  
    # *  
  # * *  
# * * *  


'''


for i in range(4):
	count=0
	for j in range(4):
		if(j<3-i):
			print(" ",end=" ")
		else:
			if(count==0):
				print("#",end=" ")
				count+=1
			else:
				
				print("*",end=" ")
	print(" ")	
