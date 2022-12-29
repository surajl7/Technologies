# //Loops:
#
# //Pattern Programs
#
# /*
#
# Ex. Star Pattern - Descending
#
# * * * * *
# * * * *
# * * *
# * *
# *
#
# */

limit = int(input("Enter the limit: "))

for i in range(0, limit, 1):
    for j in range(i, limit, 1):
        print("* ", end=' ')
    print(end='\n')
