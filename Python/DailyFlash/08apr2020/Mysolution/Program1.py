from array import *
l=[int(x)for x in input("Enter elements:").split()]
arr=array('i',l)
sum=0
for i in arr:
	sum=sum+i
avg=sum/len(arr)
print("average=",avg)
sd=avg**0.5
print("SD=",sd)
v=sum/len(arr)
print("Varience=",v)
