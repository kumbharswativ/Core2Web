#set Intersections :
'''
compute the intersection of two or more sets

'''

MyFriends={'kanha','rahul','ashish'}
AshishFriends={'chaitanya','rajesh','rahul'}

print(MyFriends ^ AshishFriends)	#{'rajesh', 'chaitanya', 'ashish', 'kanha'}


print(MyFriends.symmetric_difference(AshishFriends))	#{'rajesh', 'chaitanya', 'ashish', 'kanha'}


