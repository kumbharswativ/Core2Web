'''
Removes the first item from the list whose value is equal to x
'''

listApp=['Facebook','Instagram','TikTok','PubG']
print(listApp)

listApp.remove('TikTok')
print(listApp)


'''
it raises a valueerror if there is no such item

'''

listApp.remove('shareit')
print(listApp)			#ValueError: list.remove(x): x not in list

