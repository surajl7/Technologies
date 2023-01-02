# Array:
#
# Array Operations
#
# Copy of an array:
# 1. view() --> function to create new array at different location
#     1. Shallow Copy:
#         Array Linked with each other or dependent on each other

from numpy import *

arr1 = array([2, 6, 8, 1, 3])
arr2 = arr1.view()

print("arr1: ", arr1, end='\n')
print("arr2: ", arr2, end='\n')
print("id of arr1: ", id(arr1), end='\n')
print("id of arr2: ", id(arr2), end='\n')

print(end='\n')

arr1[1] = 6
print("arr1: ", arr1, end='\n')
print("arr2: ", arr2, end='\n')
print("id of arr1: ", id(arr1), end='\n')
print("id of arr2: ", id(arr2), end='\n')