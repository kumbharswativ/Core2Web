'''
Write a Program to Convert entered Octal Number to Hexadecimal
Number
Input: Decimal Number: 77
Output: Decimal Number: 3F

'''

octal=input("Octal Number:")
dec=str(int(octal,8))
decm=int(dec)
print("Hexadecimal Number",hex(decm).lstrip("0x"))
