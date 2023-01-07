# //Loops:
#
# /*
# Ex. a] print below patter using nested loop
# * * * * *
# * * * * *
# * * * * *
# * * * * *
# * * * * *
# */

count = int(input("Enter the count: "))

for i in range(0, count, 1):
    for j in range(0, count, 1):
        print("* ", end='')
    print(end='\n')
