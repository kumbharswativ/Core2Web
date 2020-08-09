# Accessing Dictionary values :

'''
 A value is retrieved from a dictionary by specifying its corresponding key in square 
 brackets ([])
 
'''
CoronaCases={}
CoronaCases['mah']=170000
CoronaCases['up']=21459
CoronaCases['gujrat']=30709
CoronaCases['tamilnadu']=78355

print(CoronaCases['gujrat'])	#30709

'''
If we use a key that is not in the dictionary, python raises an exeception:

'''

print(CoronaCases['keral'])	#KeyError: 'keral'

