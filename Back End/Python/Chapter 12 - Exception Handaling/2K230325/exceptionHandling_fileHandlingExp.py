# Exception Handling
#
# Example:
#     Exception when trying to write to a read only file

try:
    f = open("demofile.txt")
    f.write("ABC")
except:
    print("Something went wrong", end="\n")
finally:
    f.close()
    # print("Try again", end="\n")
