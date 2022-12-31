# Array: 

# Copy Array -->

from array import *

vals = array('i', [5, 9, 8, 4, 2])
print("Array1: ", vals, end='\n')

newArr = array(vals.typecode, (i for i in vals))
# print("Array2: ",newArr, end = '\n')

print("", end='\n')

print("Array2: ", end=' ')
for e in newArr:
    print(e, end=' ')

print("\nArray2: ", newArr, end='\n')

print("", end='\n\n')
