# Question3:
#
# Write a python program to print fibonacci series up to n terms

# -----------------------------------------------------------------------------------------

n = int(input("Enter number of terms: "))


def fibonacci(n):
    first_num = 0
    next_num = 1
    fs = 0

    print("Fibonacci Series: {} {}".format(first_num, next_num), end=" ")

    while n != 1:
        fs = first_num + next_num

        print("{}".format(fs), end=" ")

        first_num = next_num
        next_num = fs

        n -= 1

    print(end="\n")


fibonacci(n)
