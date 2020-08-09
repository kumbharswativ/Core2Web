from array import *
list1=[int(x)for x in input("Enter elements:").split()]
arr=array('i',list1)
temp=0
print("Elements of array:",end=" ")
for i in range(len(arr)):
	print(arr[i],end=" ")
for i in range(len(arr)):
	for j in range(i+1,len(arr)):
		if(arr[i]>arr[j]):
			temp=arr[i]
			arr[i]=arr[j]
			arr[j]=temp
print()
print("Elements after sorting:")
for i in range(len(arr)):
	print(arr[i],end=" ")
