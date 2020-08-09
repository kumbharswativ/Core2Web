s=input("Enter a string:")

for i in range(14):
	for j in range(8):
		if(j-i>=1 or i+j>=15):
			print(" ",end=" ")
		else:
			print(s[j],end=" ")
	print(" ")
