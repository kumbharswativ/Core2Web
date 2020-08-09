'''
- The list index() method can take a maximum of three arguments:
  
  element : the element to be searched 
  start(optional) : start searching from this index 
  end(optionnal) : search the element up to this index
'''

# finding the index of the element

listApp=['Facebook','Instagram','TikTok','PubG']
print(listApp)			#['Facebook', 'Instagram', 'TikTok', 'PubG']

print(listApp.index('TikTok'))	#2



'''
 Index of the element not present in the list:
print(listApp.index('shareit')) 	#ValueError: 'shareit' is not in list

'''


'''
 working of the index() with start and end parameters
'''
#print(listApp.index('PubG',5,7))		#ValueError: 'PubG' is not in list

print(listApp.index('PubG',2,7))	#3


