# Question5:
#
# Design a python program which will throw an exception if the value entered by the user is less than zero

# -----------------------------------------------------------------------------------------

# try:
#     value = int(input("Enter your value: "))
#     if value < 0:
#         result = value // 0
#
# except ZeroDivisionError:
#     print("\nValue is less than zero", end="\n")
# finally:
#     print("\nFinally block executed", end="\n")
#


class lessThanZeroException(Exception):
    pass


try:
    value = int(input("Enter your value: "))

    if value < 0:
        raise lessThanZeroException

except lessThanZeroException:
    print("Exception occurred: Entered value is less than Zero", end="\n")
