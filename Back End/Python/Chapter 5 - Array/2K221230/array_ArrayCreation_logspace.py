# Array

# Using logspace()

# It takes three parameters start, stop and step

#             10^start_value
#                   Start  Steps
#                     |     |
# e.g. arr = logspace(1, 40,5)
#                         |
#                        end
#                   10^end_value

# Default steps are 50

# Range = 0 gives --> [] {empty array}

# Syntax:
# def logspace(start: ndarray | Iterable | int | float,
#              stop: ndarray | Iterable | int | float,
#              num: int | None = 50,
#              endpoint: bool | None = True,
#              base: ndarray | Iterable | int | float | None = 10.0,
#              dtype: object = None,
#              axis: int | None = 0) -> Any

from numpy import *

start = int(input("Enter the start: "))
stop = int(input("Enter the stop: "))
step = int(input("Enter the step: "))

arr = logspace(start, stop, step)

print("\nlogspace array is: {}".format(arr), end='\n\n')

num = int(input("Enter array index to display value: "))
print("array element arr[{}] is: {:.2f}".format(num, arr[num]), end='\n')
