# //Loops:
#
# //Pattern Programs
#
# /*
#
# Ex. Number Pattern - Ascending
#
# 1
# 1 2
# 1 2 3
# 1 2 3 4
# 1 2 3 4 5
#
# */

count = int(input("Enter the count: "))

for i in range(0, count + 1, 1):
    for j in range(1, i + 1, 1):
        print(j, ' ', end='')
    print(end='\n')
