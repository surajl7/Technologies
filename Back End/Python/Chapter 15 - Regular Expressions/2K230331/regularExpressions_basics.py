# Python RegEx:
#
# Regular Expressions

import re

txt = "The rain in Spain"
x = re.search("^The.*Spain$", txt)
print(x)

print("-----------------------------------------------------------------", end="\n")

# findall() Function -->
print("\nfindall Function: ", end="\n")
txt = "The rain in Spain"
x = re.findall("ai", txt)
print(x)

x = re.findall("Portugal", txt)
print(x)

print("-----------------------------------------------------------------", end="\n")

# Search function: -->
print("\nSearch function: ", end="\n")
txt = "The rain in Spain"
x = re.search("\s", txt)
print("The first white space charter is located in position:", x.start())

txt = "The rain in Spain"
x = re.search("Portugal", txt)
print(x)

print("-----------------------------------------------------------------", end="\n")

# Split function: -->
print("\nSplit Function: ", end="\n")
txt = "The rain in Spain"
x = re.split("\s", txt)
print(x)

print("You can control the number of occurrences by specifying the 'maxsplit' parameter:", end="\n")
txt = "The rain is Spain"
x = re.split("\s", txt, 1)
print(x)

print("-----------------------------------------------------------------", end="\n")

# Sub Function: -->
print("\nSub Function: ", end="\n")
txt = "The rain in Spain"
x = re.sub("\s", "9", txt)
print(x)

txt = "The rain in Spain"
x = re.sub("\s", "9", txt, 2)
print(x)

print("-----------------------------------------------------------------", end="\n")

# Match Object: -->
print("\nMatch Object: ", end="\n")

txt = "The rain in Spain"
x = re.search("ai", txt)
print(x)  # This will print and object

print("-----------------------------------------------------------------", end="\n")

# Using of span function:
print("\nUsing span function: ", end="\n")
txt = "The rain in Spain"
x = re.search(r"\bS\w+", txt)
print(x.span())

print("-----------------------------------------------------------------", end="\n")

# Using string function:
print("\nUsing string function: ", end="\n")
txt = "The rain in Spain"
x = re.search(r"\bS\w+", txt)
print(x.string)

print("-----------------------------------------------------------------", end="\n")

# Using group in function:
print("\nUsing group function: ", end="\n")
txt = "The rain in Spain"
x = re.search(r"\bS\w+", txt)
print(x.group())

print("-----------------------------------------------------------------", end="\n")
