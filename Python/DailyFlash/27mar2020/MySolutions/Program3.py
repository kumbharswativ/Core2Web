from array import *
list1=[int(x)for x in input("Enter elements:").split()]
arr=array('i',list1)
for i in range(len(arr)):
	if(arr[i]%2>=1):
		print(arr[i]*arr[i],end=" ")
