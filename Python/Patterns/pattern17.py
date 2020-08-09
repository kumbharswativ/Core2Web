ch=65
for i in range(1,6):
	for j in range(1,i+1):
		if(i-j>=-1):
			print(chr(ch),end=" ")
	ch+=1
	print(" ")
