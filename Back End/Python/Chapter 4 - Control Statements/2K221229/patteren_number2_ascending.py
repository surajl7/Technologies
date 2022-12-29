# //Loops:
# 
# //Pattern Programs
# 
# /*
# 
# Ex. Number Pattern 2 - Ascending
# 
# 1
# 2 2
# 3 3 3
# 4 4 4 4
# 5 5 5 5 5
# 
# */

count = int(input("Enter the count: "))

for i in range(0, count + 1, 1):
    for j in range(1, i + 1, 1):
        print(i, ' ', end='')
    print(end='\n')