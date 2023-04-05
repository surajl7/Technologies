# Date time
#
# all date time format codes
#
# Format codes
#
# Directives      Description                             Example
#
# %a              Weekday, short version                  wed
#
# %A              Weekday, full version                   Wednesday
#
# %w              Weekday as a number (sunday = 0)        3
#
# %d              day of month                            31
#
# %b              Month name, short                       Dec
#
# %B              Month name, full                        December
#
# %m              Month as a number                       12
#
# %y              Year, short                             18
#
# %Y              Year, full                              2019
#
# %H              Hour, 00-23                             17
#
# %I              Hour, 00-12                             5
#
# %P              AM/PM                                   PM
#
# %m              Minutes 00-59                           41
#
# %s              seconds 0-59                            08
#
# %f              Microseconds
#
# %z              UTC offset                              +0100
#
# %Z              Timezone                                C87
#
# %j              Day no of year 001-366                  365
#
# %u              Week no of year (FirstDay - sunday)     52
#
# %w              Week no of year (FirstDay - monday)     52
#
# %c              Local version date & time
#
# %x              Local version of date
#
# %X              Local version of time
#
# %%              A % Character                           %

import datetime

x = datetime.datetime.now()

print("Current time: ", x)
print("Current year: ", x.year)
print("Weekday short: ", x.strftime("%a"))
print("Weekday full: ", x.strftime("%A"))
print("Weekday as a number: ", x.strftime("%w"))
print("Day of month: ", x.strftime("%d"))
print("Name of month short: ", x.strftime("%b"))
print("Name of month full: ", x.strftime("%B"))
print("Month number: ", x.strftime("%m"))
print("Year short: ", x.strftime("%y"))
print("Year full: ", x.strftime("%Y"))
print("Hours (00-23): ", x.strftime("%H"))
print("Hours (01-12): ", x.strftime("%I"))
print("AM/PM: ", x.strftime("%p"))
print("Minutes (00-59): ", x.strftime("%M"))
print("Seconds (00-59): ", x.strftime("%S"))
print("Microseconds: ", x.strftime("%f"))
print("UTC Offset: ", x.strftime("%z"))
print("Timezone: ", x.strftime("%Z"))
print("Day number of the year (001-366): ", x.strftime("%j"))
print("Week number of the year (First day - sunday): ", x.strftime("%U"))
print("Week number of the year (First day - monday): ", x.strftime("%W"))
print("Local version date and time: ", x.strftime("%c"))
print("Local version of date: ", x.strftime("%x"))
print("Local version of time: ", x.strftime("%X"))
print("a % charter: ", x.strftime("%%"))


