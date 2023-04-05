# Functions:
#
# Functions for Lambda
#     1. Filter()
#     2. map()
#     3. Reduce()
#
# 1. Filter - Take a sequence
#     Syntax:
#     filter(<func_name>, <sequence>)
#     2 Arguments - function and sequence

print("\nDisplay even numbers from list: ", end='\n')

nums = [3, 2, 6, 4, 5, 2, 9]

print("\nWithout Using Lambda Function: --> ", end='\n')


def is_even(n):
    return n % 2 == 0


evens = list(filter(is_even, nums))
print("Even: ", evens, end='\n')

print("\nWith using lambda function: --> ", end='\n')

lmd_even = list(filter(lambda n: n % 2 == 0, nums))
print("Even: ", lmd_even, end='\n')
