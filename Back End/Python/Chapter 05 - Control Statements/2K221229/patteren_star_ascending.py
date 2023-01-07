# Control Statements
# Loops:
#
# Pattern Programs
#
# Ex. Star Pattern - Ascending
#
# *
# * *
# * * *
# * * * *
# * * * * *

num = int(input("Enter the limit: "))

for i in range(1, num + 1, 1):
    for j in range(1, i + 1, 1):
        print("* ", end=' ')
    # print(end='\n\\n')
    print(end='\n')
