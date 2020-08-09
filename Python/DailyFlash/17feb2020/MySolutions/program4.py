'''
write a program to print the following pattern
  5 4 3 2 1  
    4 3 2 1  
      3 2 1  
        2 1  
          1  
'''


for i in range(5,0,-1):
	for j in range(6-i,0,-1):
		print(" ",end=" ")
	for j in range(1,i+1):
		
		print(i,end=" ")
		i=i-1
	print(" ")
	
	
