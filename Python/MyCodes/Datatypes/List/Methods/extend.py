'''
 -> Extends the list by appending all the items from the iterable.
    this allows you to join two lists together.
    
 -> The extend() method adds all the elements of an iterable (list, tuple, string etc)
    to the end of the list. 
'''

BatsMan=['virat','rohit','dhoni']
Bowler=['Bhuvi','Bumrah','chahal']
TeamIndia=[]

TeamIndia.extend(BatsMan)
print(TeamIndia)

TeamIndia.extend(Bowler)
print(TeamIndia)
