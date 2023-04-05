# Array: 

# Array Creation Methods:
#     1. array()
#     2. linspace()
#     3. longspace()
#     4. arange()
#     5. zeros()
#     6. ones()

# 1. Using array()

from numpy import *

arr = array([1, 2, 3, 4])
print("\narr.dtype: ", arr.dtype, end='\n')
print("type(<var>): ", type(arr), end='\n')
print("Array is: ", arr, end='\n\n')

# To convert data type:
print("\nAfter change in datatype: ", end='\n')
arr = array([1, 2, 3.25, 4], float)
print("arr.dtype: ", arr.dtype, end='\n')
print("Array is: ", arr, end='\n')
