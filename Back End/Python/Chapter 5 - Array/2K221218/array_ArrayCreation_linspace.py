# Array

# Using linespace()

# It takes three parameters start, stop and step 

#                    Start Parts
#                      |    |
# e.g. arr = linespace(0, 1,16)
#                         |
#                        end

# Default parts are 50

from numpy import *

start = int(input("Enter the start: "))
stop = int(input("Enter the stop: "))
parts = int(input("Enter the parts: "))

arr = linspace(start, stop, parts)

print("\n{}".format(arr), end='\n\n')

print("Elements of array as follows: ", end='\n')
# for i in range(start, stop, (stop/parts)):
for i in arr:
    print("{:.4f}".format(i), end=' ')

print(end='\n\n')

print("######################################", end='\n')
print("Checking the default value of parts: ", end='\n')
rra = linspace(0, 15)

print("\n{}".format(rra), end='\n\n')
