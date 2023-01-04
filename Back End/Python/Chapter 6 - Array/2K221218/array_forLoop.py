# Array:
# Using for loop

from array import *

vals = array('i', [5, 6, 7, 8, 9])

arr_size = vals.buffer_info()
print(arr_size)

arr_size1 = len(vals)
print("Array Size: ", arr_size1)

for i in range(arr_size1):
    if i < arr_size1 - 1:
        print(vals[i], end=", ")
    else:
        print(i)
