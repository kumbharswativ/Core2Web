var=[str(x)for x in input("Enter a string:").split()]
s=input("Enter a string to remove:")
var.remove(s)
print("String after deletion:",''.join(var[:]))
