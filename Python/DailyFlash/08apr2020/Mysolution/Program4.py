for i in range(1,5):
	a=4
	for j in range(1,8):
		if(i+j<=4 or j-i>=4):
			print(" ",end=" ")
		else:
			if(j==1 or j==2 or j==3 or j==4):
				print(j,end=" ")
			else:
				print(a-1,end=" ")
				a-=1
	print(" ")
			
