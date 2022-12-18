# Array:

# Syntax: ------------------------------>
# import array as arr
# arr.array()
# or
# from array import *
##############################################################

from array import *

print("1. Array Values: ")
vals = array('i',[5,9,8,4,2])
print(vals,"\n")

# Function
# buffer_info() --->gives size of array 

print("2. Array Size and info: ")
print(vals.buffer_info(),"\n")

print("3. Array reverse: ")
vals.reverse()
print(vals,"\n")

print("4. Finding particular value: ")
print("vals[0] --> ",vals[0],"\n")