# Loops

# Ex. Palindrome
# ?Note:
# reverse of number is same as the original number
# E.g. num = 121   |   reverse of number = 121   |   There for number is palindrome
# E.g. num = 123   |   reverse of number = 321   |   There for number is not a palindrome

num1 = int(input("Enter the number: "))
onum = num1
rev = 0

while (num1 != 0):
    digt = num1 % 10
    # print("digt --> ",digt)
    rev = rev * 10 + digt
    # print("rev --> ",rev)
    num1 = num1 // 10

print("Reverse of number is: {}".format(rev), end = '\n')
if (onum == rev):
    print("The number is a palindrome", end = "\n")
else:
    print("The number is not a palindrome", end = "\n")

print(end = "\n")