# Control Statements

# Loops

# Ex. Factorial of Number

# ? Note ---->
#
# ==> The factorial of a non-negative integer n, denoted by n!
#
# ==> factorial of a number is the product of all positive integers less than or equal to n.
#
# Ex. n! = n * (n-1) * (n-2) * (n-3) * .... * 3 * 2 * 1
#        = n * (n-1)!
#
# ==> The value of 0! is 1, according to the convention for an empty product.

num = int(input("Enter the number: "))

i = 1
fct = 1

while (i <= num):
    fct = fct * i
    i += 1
print("Factorial of {} is {}".format(num, fct), end="\n")
