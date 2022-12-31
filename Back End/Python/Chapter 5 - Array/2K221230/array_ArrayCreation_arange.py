# Array

# Using arange() --> array-range

# It takes three parameters start, stop and step

#                 Start  Steps
#                   |     |
# e.g. arr = arange(1, 15,2)
#                       |
#                      end

# Default steps are 1

# Range = 0 gives --> ZeroDivisionError: division by zero

# Syntax: arange([start,] stop[, step,], dtype=None, *, like=None)

from numpy import *

start = int(input("Enter the start: "))
stop = int(input("Enter the stop: "))
step = int(input("Enter the step: "))

arr = arange(start, stop, step)
print("\nArray Range Value is: {}".format(arr), end='\n')
