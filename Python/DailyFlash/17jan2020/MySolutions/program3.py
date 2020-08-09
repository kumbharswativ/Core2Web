'''
Q.Ask user to enter age,sex(M or F),marital staus(y or N) and then using following rules print their place of service
	if employee is female, then she will work only in urban areas
	if employee is a male and age is in between 20 to 40 then he may work in anywhere
	if employee is male and age is in between 40 to 60 then he will work in urban area only
	and any other input of age should print "ERROR"
'''

x=int(input("Enter your age :"))
y=str(input("Enter your sex(M or F) :"))
z=str(input("Enter your marital status(y or n):"))

if(y=='F'):
	print("you have to work only in urban areas" )
elif(y=='M'and (x>=20 and x<=40)):
	print("you may work in anywhere")
elif(y=='M'and (x>=40 and x<=60)):
	print("you have to work in urban areas only")
else:
	print("ERROR")
