# Functions:
#
# Functions for Lambda
#     1. Filter()
#     2. map()
#     3. Reduce()
#
# 2. Map:
#     To change every value
#     Used to apply the operations.
#     Takes two arguments Functions and Iterable.
#     Syntax:
#         map(<func_name>, <iterable>)

count = int(input("Enter the count of list: "))

lis = []

for i in range(0, count, 1):
    lis.append(int(input("lis[{}]: ".format(i))))

print("\nlis: ", lis, end='\n')

evens = list(filter(lambda n: n % 2 == 0, lis))
doubles = list(map(lambda n: n * 2, evens))  # Takes the list values from events func and multiplies them with 2
# Note:  above double is a variable not a datatype

print("List of even values in lis: ", evens, end='\n')
print("List of doubles of even values in lis: ", doubles, end='\n')
