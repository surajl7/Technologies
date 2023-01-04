# Array:
#
# Ex. Creating 2D and 3D array

from numpy import *

# Method1 : ----------------->

# count = int(input("Enter the count of elements in array: "))
#
# lis1 = []
#
# i = 0
# for i in range(0, count, 1):
#     for j in range(0, count, 1):
#         lis1.append(int(input("arr1[{}][{}]: ".format(i, j))))
#
# print("lis1: ", lis1, end='\n')
#
# arr1 = array(lis1).reshape(count, count)
# print("\narr1:", end='\n')
# print(arr1, end='\n')

# arr2 = arr1.reshape(count, count)
# print("\narr2:", end='\n')
# print(arr2)


# Method2 : ----------------->
#
# rows = int(input("Enter num of rows in array: "))
# clms = int(input("Enter num of columns in array: "))
#
#
# lis = []
#
# i = 0
# for i in range(0, rows, 1):
#     for j in range(0, clms, 1):
#         lis.append(int(input("arr1[{}][{}]: ".format(i, j))))
#
# print("lis: ", lis, end='\n')
#
# arr1 = array(lis).reshape(rows, clms)
# print("\narr1: ", end='\n')
# print(arr1, end='\n')


# Method3 : ----------------->

z = int(input("Enter num of pages in array: "))
x = int(input("Enter num of rows in array: "))
y = int(input("Enter num of columns in array: "))

lis = []

for i in range(0, z, 1):
    for j in range(0, x, 1):
        for k in range(0, y, 1):
            # print("arr1[{}][{}][{}]: ".format(i, j, k))
            lis.append(int(input("arr1[{}][{}][{}]: ".format(i, j, k))))

arr1 = array(lis).reshape(z, x, y)
print("\nArray Reshape --> pages: {}, rows: {}, columns: {}".format(z, x, y))
print("\narr1: ", end='\n')
print(arr1)
