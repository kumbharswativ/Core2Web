#set Intersections :
'''
compute the intersection of two or more sets

'''

MyFriends={'kanha','rahul','ashish'}
AshishFriends={'chaitanya','rajesh','rahul'}
print(MyFriends & AshishFriends)	#{'rahul'}

print(MyFriends.intersection(AshishFriends))	#{'rahul'}

KanhaFriends={'shashi','rahul','sunil'}
print(MyFriends.intersection(AshishFriends,KanhaFriends))	#{'rahul'}
