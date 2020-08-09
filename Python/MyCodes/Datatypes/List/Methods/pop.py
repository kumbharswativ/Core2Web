'''
syntax:
	list.pop([i])
	the square brackets around the i in the method signature denotes that the parameter is optional
	
	if no index is specified a pop() removes and returns the last itemsin the list
'''

listApp=['Facebook','Instagram','TikTok','PubG']
print(listApp)		#['Facebook', 'Instagram', 'TikTok', 'PubG']

listApp.pop()
print(listApp)		#'Facebook', 'Instagram', 'TikTok']

listApp.pop(1)
print(listApp)		#['Facebook', 'TikTok']

