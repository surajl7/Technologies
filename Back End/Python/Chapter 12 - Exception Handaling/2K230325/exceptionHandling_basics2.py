# Exception Handling:
#
# Multiple catch/except blocks

try:
    print(x)
    # print(6//0)
except NameError:
    print("Variable x is not defined", end="\n")
except:
    print("Something else went wrong", end="\n")
