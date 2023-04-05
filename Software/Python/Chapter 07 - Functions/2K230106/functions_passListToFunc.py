# Functions:
#
# Pass List to a function
#
# Ex. Function return even or add number count

def count(lis):
    even = 0
    odd = 0
    for i in lis:
        if i % 2 == 0:
            even += 1
        else:
            odd += 1

    return even, odd


lis = [20, 25, 14, 19, 16, 24, 28, 47, 26]

even, odd = count(lis)

print("\nEven = {} and Odd = {}".format(even, odd), end='\n')
