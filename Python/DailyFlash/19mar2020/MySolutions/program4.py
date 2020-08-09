'''
write a program to print the following pattern

1 2 3 4 5 6 7  
  7 6 5 4 3    
    3 4 5      
      5      
'''
num=1
for i in range(4):

	v=num
	for j in range(7):
		if(j-i<=-1 or i+j>=7):
			print(" ",end=" ")
		else:
			if(i%2==0):
				print(num ,end=" ")
				num+=1
			else:
				
				num-=1
				print(num,end=" ")
	print(" ")
	v=num-1
