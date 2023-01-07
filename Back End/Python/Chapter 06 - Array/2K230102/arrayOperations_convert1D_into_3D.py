# Array:
#
# Array Operations
#
# Convert 1D into 3D

from numpy import *

count = int(input("Enter the count of elements in array: "))

lis1 = []
lis2 = []

for i in range(0, count, 1):
    lis1.append(int(input("lis1[{}]: ".format(i))))

i = 0
for i in range(0, count, 1):
    lis2.append(int(input("lis2[{}]: ".format(i))))

print("lis1: ", lis1, end='\n')
print("lis2: ", lis2, end='\n')

print(end='\n')

arr1 = array([lis1, lis2])
print("2D array arr1: ")
print(arr1, end='\n')

print("\nConverting 2D array into 1D: ", end='\n')
arr2 = arr1.flatten()
print("converted 1D array arr2: ", arr2, end='\n')

arr3 = arr2.reshape(3, 4)
print("\nArray Reshape (rows: 3, columns: 4): ", end='\n')
print(arr3)

arr4 = arr2.reshape(2, 2, 3)
print("\nArray Reshape (matrix: 2, rows: 2, columns: 3): ", end='\n')
print(arr4)
