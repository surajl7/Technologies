# Array:
#
# Array Operations
#
# Aliasing -
# arr1 = arr2
#
# Multidimensional Array

# Ex. Two Dimensional Array

from numpy import *

count = int(input("Enter the count of array elements: "))

arr1_list = []

for i in range(0, count, 1):
    arr1_list.append(float(input("arr1[{0}]: ".format(i))))

print("\narr1 list: ", arr1_list, end='\n')

arr1 = array(arr1_list)
print("arr1: ", arr1, end='\n\n')

arr2 = array([[1, 2, 3], [4, 5, 6]])
print("2D Array: ", end='\n')
print(arr2)
print(arr2.ndim)        # gives the dimension of an array
