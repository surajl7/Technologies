# Functions:
#
# Recursion:
# When function call's itself then it is called as recursion
#
# Note:
#     In Python Maximum recursion limit is by-default 1000

import sys

print("Default Recursion Limit of the system: ", sys.getrecursionlimit(), end='\n')  # display the default recursion limit

sys.setrecursionlimit(2000)  # changing the default recursion limit and setting it to argument passed

print("New Changed Recursion Limit of the system: ", sys.getrecursionlimit(), end='\n')

