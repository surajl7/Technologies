# Question2:
#
# Write a python program to read the contents of first.txt file and write in second.txt file

# -----------------------------------------------------------------------------------------

# Copy Content From one file to Another file
def cpy_content(from_file, to_file):
    try:
        # Open both files
        with open(from_file, "r") as firstfile, open(to_file, "w") as secondfile:
            # read content from first file
            for line in firstfile:
                # write/append content to second file
                secondfile.write(line)
    except:
        print("Something Went Wrong :(", end="\n")
    else:
        print("File Content Copied Successfully :)", end="\n")


cpy_content("first.txt", "second.txt")
