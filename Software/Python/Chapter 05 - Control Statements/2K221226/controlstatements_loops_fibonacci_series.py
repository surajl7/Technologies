# Control Statement

# Loops

# Ex. Fibonacci series

# ?Note:
# ==> Fibonacci numbers, commonly denoted Fn
# ==> Fibonacci sequence, in which each number is the sum of the two preceding ones.
# ==> The sequence commonly starts from 0 and 1
# ==> Starting from 0 and 1, the next few values in the sequence are:
# 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...

snum = int(input("Enter the start number: "))
enum = int(input("Enter the end number: "))
limit = int(input("Enter the limit of number: "))
fsnum = 0


print("\nFibonacci Series: {} {}".format(snum, enum), end=' ')

while limit != 0:
    fsnum = snum + enum

    print("{}".format(fsnum), end=' ')

    snum = enum
    enum = fsnum

    limit -= 1

print(end='\n')