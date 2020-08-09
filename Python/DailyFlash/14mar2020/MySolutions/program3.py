'''
Write a Program that computes & prints Duck Numbers entered by
user using do while loop until user enters a negative number.
Input: 10 6 22 50 301 422 -1
Output: 10 50 301 Terminating

'''
n=1
print("Input:",end=" ")
while(n!=0):
	val=int(input())
	if(val>1):
		c=0
		temp=val
		while(val!=0):
			u=val%10
			
			if(u==0):
				c=c+1
			val=val//10
		if(c>0):
			print(temp,"is a Duck nummber")
	else:
		if(val<0):
			break
