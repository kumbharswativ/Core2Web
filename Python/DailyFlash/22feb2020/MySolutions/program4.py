'''
write a program to print following pattern
00 01 02 03 
   11 12 13 
      22 23 
         33 

'''
l=['0','1','2','3']
for i in range(4):
	for j in range(4):
		print(" ",end="  ")if(j<i)else print(l[i]+str(l[j]),end=" ")
	print()
