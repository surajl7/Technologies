# Functions:
#
# Decorators in Python:
#     Using decorators you can add the extra features in existing function


num1 = int(input("Enter 1st number: "))
num2 = int(input("Enter 2nd number: "))

# Ex. Without Decorators
print("\nWithout Decorators: --> ", end='\n')


def div(a, b):
    if a < b:
        a, b = b, a  # Swapping of numbers
    print("Division of {} and {} is {}".format(a, b, a / b), end='\n\n')


div(num1, num2)

num3 = int(input("Enter 1st number: "))
num4 = int(input("Enter 2nd number: "))

# With Decorators: -->
print("\nWith Decorators: --> ", end='\n')


def div1(a, b):
    print("Division of {} and {} is {}".format(a, b, a / b), end='\n')


# smart_dive is a user defined function accepts other functions as argument
def smart_div(fun):
    # inner function is also a user defined function
    # it contends an actual decorative working of a function
    def inner(x, y):
        # Swapping of two number if 1st number is smaller than 2nd
        if x < y:
            x, y = y, x
            # inner function return a function with arguments to outer function i.e. smart function
            return fun(x, y)

    # outer function i.e. smart function return inner function as output
    return inner


# div1 function is adding decorative functionality from smart_div function and saving output in itself
div1 = smart_div(div1)
# giving variables as arguments to div1 function
div1(num3, num4)
