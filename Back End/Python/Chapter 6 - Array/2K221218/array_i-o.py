# Array:

# Enter the elements from the layer

from array import *

arr = array('i', [])

arr_len = int(input("Enter the lenght of array: "))

for i in range(arr_len):
    print("arr[", i, "]: ", sep="", end="")
    x = int(input())
    arr.append(x)

print("\nArray elements are: ", end="\n")
print(arr, end=" ")
print("\n")

# Searching value from array:

val = int(input("Enter the value for search: "))

k = 0
for e in arr:
    if e == val:
        print(val, " is at location arr[", k, "]", sep="", end='\n')
        break
    k = k + 1

print("", end='\n')
