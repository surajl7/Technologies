# Functions:
#
# Functions for Lambda
#     1. Filter()
#     2. map()
#     3. Reduce()
#
# 3. Reduce:
#     To connect multiple values in single value
# takes 2 parameters functions and sequences
#     Syntax:
#         map(<func_name>, <sequences>)

from functools import reduce

lis = [3, 2, 6, 8, 4, 2, 9]

sum = reduce(lambda a, b: a + b, lis) # Gives addition of all elements in the array

print("\nsum of elements in lis: ", sum, end='\n\n')
