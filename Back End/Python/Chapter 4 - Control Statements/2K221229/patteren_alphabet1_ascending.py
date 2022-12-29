# //Loops:
#
# //Pattern Programs
#
# /*
#
# Ex. Alphabet Pattern 1 - Ascending
#
# A
# A B
# A B C
# A B C D
# A B C D E
#
# */

limit = int(input("Enter the limit: "))

for i in range(0, limit + 1, 1):
    for j in range(0, i, 1):
        print(chr(j + 65), " ", end='')
    print(end='\n')

# print(chr(65))
