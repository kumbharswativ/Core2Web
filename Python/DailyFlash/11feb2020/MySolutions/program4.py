'''
Write a Program to Print following Pattern.
      A 
    B A 
  C B A 
D C B A 


'''


for i in range(4):
    for j in range(4):
        if(j < 3 - i):
            print(" ", end = " ")
        else:
            print(chr(68 - j),end = " ");
    print()
