# Array:
#
# Array Operations
#
# Copy of an array:
# 2. Deep Copy:
#    Array are not dependent on each other for this instead of view use copy function

from numpy import *

arr1 = array([1, 2, 3, 4])
arr2 = arr1.copy()
print("arr1: ", arr1, end='\n')
print("arr2: ", arr2, end='\n')
print("id of arr1: ", id(arr1), end='\n')
print("id of arr2: ", id(arr2), end='\n')

print(end='\n')

arr1[1] = 7
print("arr1: ", arr1, end='\n')
print("arr2: ", arr2, end='\n')
print("id of arr1: ", id(arr1), end='\n')
print("id of arr2: ", id(arr2), end='\n')
