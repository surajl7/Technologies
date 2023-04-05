# Functions:

# Ex. Using recursive function find a factorial of a number

num = int(input("\nEnter the number: "))

print("\nUsing simple function: --> ", end='\n')


def fact(num1=None):
    for i in range(1, num1, 1):
        num1 = num1 * i

    return num1


print("Factorial of {}! is {}".format(num, fact(num)), end='\n')


print("\nUsing recursive function: --> ", end='\n')


def factrec(num2):
    if num2 == 0:
        return 1
    return num2 * factrec(num2 - 1)


print("Factorial of {}! is {}".format(num, factrec(num)), end='\n')
