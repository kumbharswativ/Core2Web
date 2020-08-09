'''
Write a Program to Convert entered Hexadecimal Number to
Binary Number.
Input: Hexadecimal Number: 5f
Output: Binary Number: 1011111

'''

hexa=input("Hexadecimal Number:")
dec=int(hexa,16)

print("Binary Number:",bin(dec).lstrip('0b'))
