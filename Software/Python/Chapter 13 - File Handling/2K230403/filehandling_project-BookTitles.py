# File Handling:
#
# Project:
# You have been asked to make a special book categorization program, which assigns each book a
# special code based on its title.
# The code is equal to the first letter of the book, followed by the number of characters in the title.
# For example, for the book "Harry Potter", the code would be: H12, as it contains 12 characters (including the space).
#
# You are provided a books.txt file, which includes the books titles, each one written on a separate line.
# Read the title one by one and output the code for each book on a separate line.
#
# For example, if the books.txt file contains:
# Some book
# Another book
#
# Your program should output:
# S9
# A12

import os

file_name = "books.txt"


def bookCode():
    print("Creating a book code...", end="\n")
    rf = open(file_name, "r")
    # book_code = rf.read(1) + str(len(rf.readline()) - 1)
    # print(book_code, end="\n")

    for line in rf:
        if line[-1] == "\n":
            print(line[0]+str(len(line)-1))
        else:
            print(line[0]+str(len(line)))
    rf.close()


try:
    if not os.path.exists(file_name):
        print("Creating a file", end="\n")
        f = open(file_name, "w")

        # count = 0
        count = int(input("Enter the book count: "))

        for i in range(count):
            book_name = str(input("Enter books name: "))
            f.write(book_name + "\n")
        f.close()
    else:
        bookCode()
except:
    print("Something went wrong...", end='\n')
finally:
    print("Thank you...")
