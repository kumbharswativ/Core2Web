from array import *
list1=[int(x)for x in input("Enter elements:").split()]
arr=array('i',list1)
c=0
s=0
list2=[]
for i in range(len(arr)):
	if(arr[i]%2>=1):
		c=arr[i]**3
		list2.append(c)
	else:
		s=arr[i]**2
		list2.append(s)
arr1=array('i',list2)
print("Array after operation:",end=" ")
for i in range(len(arr1)):
	p=arr1[i]
	print(p,end=" ")
