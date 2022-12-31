# Array:
#
# Array Operations
#
# Copy of an array:
# 1. view() --> function to create new array at different location

from numpy import *

arr1 = array([1, 2, 3, 4, 5])
arr2 = arr1.view()

print("arr1: ", arr1, end='\n')
print("arr2: ", arr2, end='\n')

print("id of arr1: ", id(arr1), end='\n')
print("id of arr2: ", id(arr2), end='\n')
