# # File Handling
#
# # Introduction:
#     open() - For opening a file
#     two arg --> filename and mode
#
# file handling modes:
#     r - read
#     a - append
#     w - write
#     x - create
#     t - Text mode
#     b - binary mode

# Example: Create and write in a file
# NOTE: if file does not exist, it will be created automatically when passing the write mode

print("Write in a file: -------------->", end="\n")

f = open("demo.txt", "w")
f.write("")  # write function requires at least one argument
f.close()  # When you wish to open a file in another then should compulsory close the file in
# currently opened mode

# Example: Writing a data in file
f = open("demo.txt", "w")
f.write("Writing a line in demo.txt file\n")
f.write("Writing a second line in demo.txt file")
f.close()

# --------------------------------------------------------------------------------------------------------------
# Example: Reading a file

print("read in a file: -------------->", end="\n")

f = open("demo.txt", "r")
f.read()
f.close()

# To print a file data on a terminal
f = open("demo.txt", "r")
print(f.read())
f.close()

# To read a specific characters in a file
f = open("demo.txt", "r")
print(f.read(5))  # reads a number of character passed to a read function
f.close()

# To read a line in a file
f = open("demo.txt", "r")
print(f.readline())  # reads a first line in a file
f.close()

# Example: Read a file through loop line by line
f = open("demo.txt", "r")
for x in f:
    print(x)  # read each character line by line and prints it on a terminal
f.close()

# --------------------------------------------------------------------------------------------------------------

# Example: Writing in a existing file that is appending data in a file

print("write in a existing file: -------------->", end="\n")

f = open("demo.txt", "a")
f.write("\nPython file Handling")
f.close()

f = open("demo.txt", "r")
print(f.read())
f.close()

# --------------------------------------------------------------------------------------------------------------

# # Example:  delete a file
#
# import os
# if os.path.exists("demo.txt"):
#     os.remove("demo.txt")
# else:
#     print("The file does not exists")

# --------------------------------------------------------------------------------------------------------------

# Example: Reading a file in binary format

f = open("demo.txt", "rb")
print(f.read())
f.close()
