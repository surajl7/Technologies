# Modules:
#
# imports and use functions from cal.py

import cal

n1 = int(input("Enter 1st number: "))
n2 = int(input("Enter 2nd number: "))

sum = cal.add(n1, n2)

print("\nSum of {} and {} is {}".format(n1, n2, sum), end='\n')

# SqRtNum = cal.sqroot(n1)
print("\nSquare root of {} is {:.0f}".format(n1, cal.sqroot(n1)), end='\n')