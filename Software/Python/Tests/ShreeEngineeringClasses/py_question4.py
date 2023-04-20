# Question4:
#
# Write a python program to concatenate two strings


str1 = str(input("Enter 1st string: "))
str2 = str(input("Enter 2nd string: "))

new_str = str1 + str2
new_str1 = "".join([str1, str2])
new_str2 = " ".join([str1, str2])
new_str3 = ",".join([str1, str2])
new_str4 = "%s %s" % (str1, str2)
new_str5 = "{} {}".format(str1, str2)
new_str6 = f"{str1} {str2}"

print(new_str, end="\n")
print(new_str1, end="\n")
print(new_str2, end="\n")
print(new_str3, end="\n")
print(new_str4, end="\n")
print(new_str5, end="\n")
print(new_str6, end="\n")



