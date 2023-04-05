# Date Time
#
# Python Date Time:
#     Python date time module requires datetime to work with dates

import datetime  # importing a module

print("----------------------------------------------", end="\n")

x = datetime.datetime.now()  # calling a function
print(x, end="\n")  # printing current date and time

print("----------------------------------------------", end="\n")

print("Displaying only Day", end="\n")
y = datetime.datetime.now()
print(y, end="\n")
print(y.strftime("%A"), end="\n")

print("----------------------------------------------", end="\n")

print("Creating date object:", end="\n")
x = datetime.datetime(1999, 12, 23)
print(x, end="\n")

print("----------------------------------------------", end="\n")

# strftime() --> Convert time into string format
print("Displaying only month", end="\n")
x = datetime.datetime(2018, 6, 1)
print(x.strftime("%B"))
