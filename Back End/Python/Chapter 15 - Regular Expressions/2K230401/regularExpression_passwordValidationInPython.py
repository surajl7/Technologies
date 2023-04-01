# Python RegEx:
#
# Regular Expressions

# Ex: Password Validation In Python

import re

pswd = 'XdsE83&!'
reg = "^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[@$!%*#?&])[A-Za-z\d@$!#%*?&]{8,18}$"

# Compiling regex
match_re = re.compile(reg)

# Searching regex
res = re.search(match_re, pswd)

# Validating conditions
if res:
    print("Valid Password")
else:
    print("Invalid Password")

