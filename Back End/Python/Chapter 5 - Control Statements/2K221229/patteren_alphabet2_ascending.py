# //Loops:
#
# //Pattern Programs
#
# /*
#
# Ex. Alphabet Pattern 2 - Ascending
#
# A
# B B
# C C C
# D D D D
# E E E E E
#
# */

count = int(input("Enter the count: "))

for i in range(0, count + 1, 1):
    for j in range(0, i, 1):
        print(chr(i + 64), end=' ')
    print(end='\n')
