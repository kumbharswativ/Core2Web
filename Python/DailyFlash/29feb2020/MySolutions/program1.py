'''
Write a Program that prints the Disarium Number limiting between
bounds provided by user.
Input:
Lower Bound: 1
Upper Bound: 100
Output: Series of Disarium Number ranging in 1 to 100 is = 1 2 3 4 5 6 7 8 9 89

'''
a=int(input("Lower bound:"))
b=int(input("Upper bound:"))
print("output:",end=" ")
for i in range(a,b+1):
	rev=0
	temp=i
	while(i!=0):
		rem=i%10
		rev=rev*10+rem
		i=int(i/10)
	j=1
	s=0
	while(rev!=0):
		rem=rev%10
		s+=rem**j
		j+=1
		rev=int(rev/10)
	if(temp==s):
		print(temp,end=" ")
print()

