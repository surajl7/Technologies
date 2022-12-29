# //Loops:
#
# //Pattern Programs
#
# /*
#
# Ex. Star pyramid Pattern - Descending
#
# * * * * *
#  * * * *
#   * * *
#    * *
#     *
#
# Here, <blankspace> is denoted as #
#
# */

count = int(input("Enter the count: "))

for i in range(0, count + 1, 1):
    for j in range(1, i + 1, 1):
        print(" ", end='')
    for j in range(i, count + 1, 1):
        print("* ", end='')
    print(end='\n')
