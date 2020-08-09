for i in range(4):
	for j in range(7):
		if(i+j<=2 or j-i>=4):
			print(" ",end=" ")
		else:
			if(j == 3):
				print("1",end=" ")
			else:
				print("0",end=" ")
	print()
