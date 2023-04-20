# Question6:
#
# Write a Python program to create a following pattern using both while and for loop
#
# 1
# 1 2
# 1 2 3
# 1 2 3 4


num = int(input("Enter the limit: "))


def left_pyramid_pattern_forloop(num):
    print("\nPattern using for loop: ", end="\n")
    for i in range(1, num, 1):
        for j in range(1, i + 1, 1):
            print(j, end=" ")
        print(end="\n")

    print(end="\n")


def left_pyramid_pattern_whileloop(num):
    print("\nPattern using while loop: ", end="\n")
    i = 1
    while i != num:
        j = 1
        while j != i + 1:
            print(j, end=" ")
            j += 1
        print(end="\n")
        i += 1

    print(end="\n")


left_pyramid_pattern_forloop(num + 1)
left_pyramid_pattern_whileloop(num + 1)
