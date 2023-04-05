# Loops

# Ex. Armstrong number
# Armstrong Number Code for N Digit Number in Python


# A number is thought of as an Armstrong number if the sum of its own digits raised to the power number 
# of digits gives the number itself. 

# For example, 0, 1, 153, 370, 371, 407 are three-digit Armstrong numbers and, 
# 1634, 8208, 9474 are four-digit Armstrong numbers and there are many more.


# Algorithm:-------->

# Step 1: Start

# Step 2: Read an integer input number.

# Step 3: Declare and Initialise the variables current_digit, sum = 0, digits = 0 and num = number.

# Step 4: Calculate the number of digits in the input integer number and store it in the variable number_of_digits.

# Step 5: Repeat Steps 5 to 7 Until num > 0

# Step 6: current_digit = (num % 10)

# Step 7: sum = sum + number_of_digits

# Step 8: num = num / 10

# Step 9: Check if sum == number Then
# Print “It is an Armstrong Number.”
# Else
# Print “It is not an Armstrong Number.”

# Step 10: END

# Formula:------->
# d = num % 10;
# sum = sum + pow(d,3);
# num = num / 10;

# Where:
# d = each digit of number
# sum = Sum of cube of each digit of a number
# num = Number
# onum = Original Number
# -----------------------------------------------------------

from math import *

num = int(input("Enter the number: "))

onum = num
dnum = num
count = 0
sum = 0

while (dnum != 0) :
    d = dnum % 10
    # print("d:",d)
    count += 1
    # print("count:",count)
    dnum = dnum // 10
    # print("dnum:",dnum)

print("Total number of digits in number:",count , end = '\n\n')

while (num != 0):
    d1 = num % 10
    # print("d1:",d1)
    sum = sum + pow(d1,count)
    # sum = sum + (d1*d1*d1)
    num = num // 10

print("Magic number is: ", sum)

if (onum == sum):
    print("Entered number is equal Magic number", end = '\n\n')
    print("{} is Armstrong number!".format(onum), end = '\n\n')
else:
    print("Entered number is not equal Magic number")
    print("{} is Not a Armstrong number!".format(onum), end = '\n\n')