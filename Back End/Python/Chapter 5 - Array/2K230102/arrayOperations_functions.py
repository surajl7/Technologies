# Array:
#
# Array Operations
#
# 1. ndim --> gives the dimension
# ex. print(arr.ndim)
#
# 2. shape --> gives no of rows and columns
# ex. print(arr.shape)
#
# 3. size --> size of entire block
# ex. print(arr.size)

from numpy import *

count = int(input("Enter the count of elements in array: "))

arr1_list = []

for i in range(0, count, 1):
    arr1_list.append(int(input("arr1[{}]: ".format(i))))

arr1 = array(arr1_list)
print("arr1_list: ", arr1_list, end='\n')
print("arr1: ", arr1, end='\n\n')

print("Dimension of array: ", arr1.ndim)
print("Shape of array: ", arr1.shape)
print("Size of array: ", arr1.size)