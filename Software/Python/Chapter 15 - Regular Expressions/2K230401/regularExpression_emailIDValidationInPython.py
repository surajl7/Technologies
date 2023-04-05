# Python RegEx:
#
# Regular Expressions

# Ex: Email ID Validation in Python

# NOTE: -->
# # Works in most newer browsers
# ^(?=.{8,20}$)(?!][_.])(?!.*[_.]{2})[a-zA-Z0-9._]+(?<![_.])$

# ^(?=.{8,20}$) ---> username is 8-20 characters long
# (?!][_.]) ---> no _ or . at the beginning
# (?!.*[_.]{2}) ---> no _ or _. or _. or .. inside
# [a-zA-Z0-9._] ---> allowed characters
# (?<![_.]) ---> no _ or . at the end

# # Works in all browsers, but does the same as the above RegEx
# ^(?=[a-zA-Z0-9._]{8,20}$)(?!.*[_.]{2})[^_.].*[^_.]$

import re

regex = re.compile(r'([A-Za-z0-9]+[.-_])*[A-Za-z0-9]+@[A-Za-z0-9-]+(\.[A-Z|a-z]{2,})+')


# email = str(input("Enter your email: "))
# email = "name.surname@gmail.com"
# email = "anonymous123@yahoo.co.uk"
# email = "anonymous123@..uk"
# email = "...@domain.us"


def isValid(email):
    if re.fullmatch(regex, email):
        print("Valid email")
    else:
        print("Invalid email")


# email = str(input("Enter your email id: "))
# isValid(email)
isValid("name.surname@gmail.com")
isValid("anonymous123@yahoo.co.uk")
isValid("anonymous123@..uk")
isValid("...@domain.us")

