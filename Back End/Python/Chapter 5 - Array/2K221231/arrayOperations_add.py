# Array:

# Array Operations:  Addition of array

# Ex. add value in element

from numpy import *

num = int(input("\nEnter the number to add: "))

arr = array([1, 2, 3, 4, 5])
print("Original Array is: ", arr, end='\n')
arr = arr + num
print("Addition of array is: ", arr, end='\n')
