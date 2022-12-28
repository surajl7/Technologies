# Control Statement

# Loops

# Ex. Prime Number

# ? Note ---->
#
# ==> A natural number (1, 2, 3, 4, 5, 6, etc.) is called a "PRIME NUMBER" (or a prime)
# if it is greater than 1 and cannot be written as the product of two smaller
# natural numbers.
#
# ==> The numbers greater than 1 that are not prime are called "COMPOSITE NUMBERS"
#
# !==> 1 is not prime, as it is specifically excluded in the definition.
# 4 = 2 × 2 and 6 = 2 × 3 are both composite.

num = int(input("Enter the number: "))
i = 1
flag = 0

if num == 0 or num == 1:
    flag = 1

for i in range(2, num):
    if num % 2 == 0:
        flag = 1
        break

if flag == 0:
    print("\n{} is a prime number".format(num), end='\n')
else:
    print("\n{} is not a prime number".format(num), end='\n')
