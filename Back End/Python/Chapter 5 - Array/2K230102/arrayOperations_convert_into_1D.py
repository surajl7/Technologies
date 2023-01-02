# Array:
#
# Array Operations
#
# Convert into 1D

from numpy import *

count = int(input("Enter the count of elements in array: "))

lis1 = []
lis2 = []

# for i in range(0, count, 1):
#     for j in range(i, count, 1):
#         lis1.append(int(input("arr1[{}][{}]: ".format(i, j))))
#         j = 0

for i in range(0, count, 1):
    lis1.append(int(input("lis1[{}]: ".format(i))))

i = 0
for i in range(0, count, 1):
    lis2.append(int(input("lis2[{}]: ".format(i))))

print("lis1: ", lis1, end='\n')
print("lis2: ", lis2, end='\n')

print(end='\n')

arr1 = array([lis1, lis2])
print("2D Array -- arr1: ")
print(arr1, end='\n')

print("\nConverting into 1D array: ", end='\n')
arr2 = arr1.flatten()

print("Converted 1D array -- arr2: ", arr2, end='\n')
