# Array:

# Ex. Searching array elements

from array import *

arr = array('i', [])

count = int(input("Enter the length of array element: "))

for i in range(1, count + 1, 1):
    arrVal = int(input("arr[{}]: ".format(i - 1)))
    arr.append(arrVal)

print("\nArray elements are: ", end='\n')
print(arr, end='\n\n')

num = int(input("Enter the element for search: "))

k = 0
for j in arr:
    if j == num:
        print("\"{}\" is at location arr[{}]".format(num, k), sep=' ', end='\n')
        break
    k = k + 1

