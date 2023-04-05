# File handling
#
# Writing and reading a binary file

def str_to_binary(string):
    binary_list = []

    for char in string:
        binary_list.append(bin(ord(char))[2:].zfill(8))

    return ''.join(binary_list)


user_data = input("Enter your text: ")

x = str_to_binary(user_data)
print(x)

f = open("bin_file1.bin", 'wb')
f.write(bytearray(x, encoding='utf-8'))
f.close()

f = open("bin_file1.bin", 'rb')
print(f.read())
f.close()
