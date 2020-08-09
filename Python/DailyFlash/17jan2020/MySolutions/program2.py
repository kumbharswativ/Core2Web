'''
Q. write a program that takes electricity unit charges as input and calculate total electricity bill according to the given condition:
	for first 50 units Rs.0.50/unit
	for next 100 units Rs.0.75/unit
	for next 100 units Rs. 1,20/unit
	for unit above 250 Rs.1.50/unit

'''

u=int(input("Enter the electricity units"))

if(u>=1 and u<=50):
	u=u*0.50
	print("electricity bill=",u)
elif(u>=50 and u<=150):
	u=u*0.75
	print("Electricity bill=",u)
elif(u>=150 and u<=250):
	u=u*1.20
	print("Electricity bill=",u)
else:
	u=u*1.50
	print("Electricity bill=",u)
