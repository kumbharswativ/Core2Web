# python set operations :

'''
sets acn be used to carry out mathematical set operations like union, intersection,
difference and symmetric difference. we can do this with operators or methods

'''

# Set Union
'''
In python, set union can be performed with the | operator :
'''

MyFriends={'kanha','rahul','ashish'}
AshishFriends={'chaitanya','rajesh','rahul'}
print(MyFriends | AshishFriends)	#{'rahul', 'rajesh', 'kanha', 'ashish', 'chaitanya'}

'''
set union can also be obtained with the union() method. the method is invoked 
on one of the sets, and the other is passed as an argument
'''
print(MyFriends.union(AshishFriends))	#{'rahul', 'rajesh', 'kanha', 'ashish', 'chaitanya'}


#difference between | ans union() function :
'''
when we use the | operator, both operands must be sets
'''
print(MyFriends | {'ajay','sagar','datta'})	#{'sagar', 'datta', 'kanha', 'ajay', 'ashish', 'rahul'}
 
#print(MyFriends | ['Ajay','sagar','datta'])	#TypeError: unsupported operand type(s) for |: 'set' and 'list'

'''
the union() method on the other hand will take any iterable as an 
argument convert it to a set and then perform the union
'''

print(MyFriends.union({'ajay','sagar','datta'}))	#{'kanha', 'sagar', 'rahul', 'ajay', 'ashish', 'datta'}

print(MyFriends.union(['ajay','sagar','datta']))	#{'ashish', 'rahul', 'ajay', 'datta', 'sagar', 'kanha'}

