l=float(input("Enter length of pendulum in meters:"))
g=9.81
p=3.142
t=(2*p)*((l/g)**0.5)
f=1/t

print("period of that pendulum is :",t,"seconds")
print("frequency of that pendulum:",f)
