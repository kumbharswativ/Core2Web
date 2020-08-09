#A set itself may be modified but the elements in the set must be of an immutable type


mySet={29,5.5,'shashi',['c','c++','java','python','android']}
print(mySet)	

'''
Traceback (most recent call last):
  File "immutableset.py", line 3, in <module>
    mySet={29,5.5,'shashi',['c','c++','java','python','android']}
TypeError: unhashable type: 'list'
'''

# in above example we have use list inside the set but the list is of mutable type so it gives error


playerJer={18:'virat kohali',7:'MSD',45:'Rohit Sharma'}
copyToSet={playerJer}
print(copyToSet)

'''
Traceback (most recent call last):
  File "immutableset.py", line 18, in <module>
    copyToSet={playerJer}
TypeError: unhashable type: 'dict'

'''
