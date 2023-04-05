# Functions:
#
# Global and Local Variable in same functions

# global() --> To access global variable address

b = 20
a = 10  # Global variable
print("\nValue of variable \"a\" is {} and Id is {}".format(a, id(a)), end='\n')


def fun():
    a = 9   # Local Variable
    x = globals()['a']  # Accessing value of global variable "a" to Local variable "x"
    print("Value of variable \"x\" is {} and Id is {}: ".format(x, id(x)), end='\n')
    print("Inside the function a: ", a, end='\n')


fun()
print("Outside the function a: ", a, end='\n')
