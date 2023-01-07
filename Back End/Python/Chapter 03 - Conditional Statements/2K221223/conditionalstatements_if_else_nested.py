# Conditional Statements

# 1. Decision Making

# controle statement - if-else - nested

# Ex. To find the largest of 3 number

num1 = int(input("Enter 1st number: "))
num2 = int(input("Enter 2nd number: "))
num3 = int(input("Enter 3rd number: "))

if (num1 > num2):
    if (num2 > num3):
        print(num1, "is greater than", num2, "and", num3)
    else:
        print(num3, "is greater than", num1, "and", num2)
else:
    if (num2 > num3):
        print(num2, "is greater than", num1, "and", num3)
    else:
        print(num3, "is greater then", num1, "and", num2)
