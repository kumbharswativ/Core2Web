#Adding Elements to a list using append and insert function


#append()	#NameError: name 'append' is not defined

lst=[10,20,30,40]
print(lst)	#[10,20,30,40]
#lst.aappend()	#AttributeError: 'list' object has no attribute 'aappend'

lst.append(50)
print(lst)	#[10,20,30,40,50]

lst.append("swati")
print(lst)	#[10,20,30,40,50,'swati']

#insert()	#NameError: name 'insert' is not defined

#lst.insert()	#TypeError: insert expected 2 arguments, got 0

lst.insert(3,28.9)
print(lst)	#[10, 20, 30, 28.9, 40, 50, 'swati']
