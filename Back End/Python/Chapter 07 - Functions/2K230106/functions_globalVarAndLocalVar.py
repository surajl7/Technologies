# Functions:
#
# Global variable and Local Variable

# Example 1:
print("\nExample 1: --> ", end='\n')
a = 10  # Global Variable


def fun():
    a = 15  # Local Variable
    print("a: ", a, end='\n')


fun()
print("a: ", a, end='\n')

# Example 2:
print("\nExample 2: --> ", end='\n')
x = 11


def fun1():
    global x
    x = 15
    print("Inside the function x: ", x, end='\n')


fun1()
print("Outside the function x: ", x, end='\n')
