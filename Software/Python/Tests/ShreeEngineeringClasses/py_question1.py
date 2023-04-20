# Question1:
#
# Write a Python Program to calculate factorial of a given number using a function

# -----------------------------------------------------------------------------------------

num = int(input("Enter your number: "))


def fact(num):
    i = 1
    fct = 1

    while i <= num:
        fct = fct * i
        i += 1

    return fct


print("Factorial of {} is {}".format(num, fact(num)))
