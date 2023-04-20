# Question2:
#
# Write a python program to read the contents of first.txt file and write in second.txt file

input_string = str(input())

file1 = open("first.txt", "w")
file1.write(input_string)
file1.close()

file1 = open("first.txt", "r")
file2 = open("second.txt", "w")
file2.cpy("first.txt")

