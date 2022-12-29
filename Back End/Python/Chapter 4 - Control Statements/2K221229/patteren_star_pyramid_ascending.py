# //Loops:
#
# //Pattern Programs
#
# /*
#
# Ex. Star pyramid Pattern - Ascending
#
# ####*
# ###* *
# ##* * *
# #* * * *
# * * * * *
#
# Here, <blank-space> is denoted as #

limit = int(input("Enter the limit: "))

for i in range(1, limit + 1, 1):
    for j in range(i, limit + 1, 1):
        print(" ", end='')
    for j in range(1, i + 1, 1):
        print("* ", end='')
    print(end='\n')