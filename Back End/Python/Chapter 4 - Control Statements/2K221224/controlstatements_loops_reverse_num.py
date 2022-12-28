# Loops

# Ex. Reverse of numbers

# // 

# /*Formula: ---------------------------------------------------
# d = num % 10;
# rev = rev * 10 + d;
# num = num / 10;

# Where:
# d = each digit of number
# rev = Reverse of number
# num = Number
# onum = Original Number
# -----------------------------------------------------------*/

# /******************************************
# ?Note:
# num = 123

# STEP1: 123 % 10 = 3
#               rev = 3
#               123 / 10 = 12

# STEP2: 12 % 10 = 12
#               rev = 32
#               12 /10 = 1

# STEP3: 1 % 10 = 1
#               rev = 321
#               1 /10 = 0

# ******************************************/

num = int(input("\nEnter the number: "))
onum = num
rev = 0

print(end='\n')

while num != 0:
    digt = num % 10
    rev = rev * 10 + digt
    num = num // 10

print("Reverse of {} is {}".format(onum, rev), end='\n\n')
