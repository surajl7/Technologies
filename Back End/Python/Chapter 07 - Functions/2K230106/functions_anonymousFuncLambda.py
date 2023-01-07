# Functions:
#
# Anonymous function - Lambda
#     - Function without name

# Normal functions:
print("\nNormal Functions: --> ", end='\n')


def square(x):
    return x * x


result = square(5)
print("Square of 5 is {}".format(result), end='\n')

# Anonymous / Lambda function:
print("\nAnonymous / Lambda function: --> ", end='\n')

f = lambda x: x * x

result = f(5)
print("Square of 5 is {}".format(result), end='\n')

# Ex. Addition of two numbers using lambda function

print("\nAddition of two number using lambda function: ", end='\n')

num1 = int(input("Enter 1st number: "))
num2 = int(input("Enter 2nd number: "))

f_add = lambda a, b: a + b

print("Addition of {} and {} is {}".format(num1, num2, f_add(num1, num2)), end='\n')
