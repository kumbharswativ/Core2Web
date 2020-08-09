'''
Q.write a program to take marks of five subjects physics,chemistry,Biology,Mathematics and computer.calculate percentage and grade according to following.
percentage>=90%:grade A
percentage>=80%:grade B
percentage>=70%:grade c
percentage>=60%:grade D
percentage>=40%:grade E
percentage<40%:grade F

'''
p=int(input("Enter marks of physics:"))
ch=int(input("Enter marks of chemistry:"))
b=int(input("Enter marks of Biology:"))
m=int(input("Enter marks of Mathematics:"))
c=int(input("Enter marks of computer:"))

per=(p+ch+b+m+c)*100/500
if(per>=90):
	print(per,"Grade A")
elif(per>=80):
	print(per,"Grade B")
elif(per>=70):
	print(per,"Grade C")
elif(per>=60):
	print(per,"Grade D")
elif(per>=40):
	print(per,"Grade E")
elif(per<40):
	print(per,"Grade F")
else:
	print("error")





