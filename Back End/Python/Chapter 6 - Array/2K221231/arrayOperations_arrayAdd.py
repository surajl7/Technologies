# Array:

# Array Operations:
# Addition of two array (vectorised operations)

# from array import *
from numpy import *

# count = int(input("Enter the count of array: "))

# arr1 = array([])
# arr2 = array([])
# arr3 = array([])

# for i in range(0, count, 1):
#     x = int(input("arr1[{}]: ".format(i)))
#     arr1.append(x)
# print("\narr1: ", arr1, end='\n\n')
#
# for j in range(0, count, 1):
#     y = int(input("arr2[{}]: ".format(j)))
#     arr2.append(y)
# print("\narr2: ", arr2, end='\n')


arr1 = array([1, 2, 3, 4, 5])
arr2 = array([1, 2, 3, 4, 5])

arr3 = arr1 + arr2

print("\nSum of array is: ", arr3, end='\n')
