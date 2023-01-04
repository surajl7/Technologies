# Functions:
#
# input Arguments from user and return multiple values

num1 = int(input("Enter num1 value: "))
num2 = int(input("Enter num2 value: "))


def add_sub(x, y):
    add = x + y
    sub = x - y
    return add, sub


r1, r2 = add_sub(num1, num2)
print("\nAddition of numbers: ", r1, end='\n')
print("Subtraction of numbers: ", r2, end='\n')
