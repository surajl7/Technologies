# Machine Learning

import numpy
from scipy import stats

speed = [99, 86, 87, 88, 111, 86, 103, 87, 94, 78, 77, 85, 86]

# Finding mean value from the set
# Mean == Average of the values from the set
mn = numpy.mean(speed)
print("\nPrinting the mean value from the set: ", end="\n")
print(mn)
print("{:.4f}".format(mn))

# Finding the median value of the set
# Median == Middle value from the set
md = numpy.median(speed)
print("\nPrinting the median value from the set: ", end="\n")
print(md)
print("{:.4f}".format(md))

# Finding the mode value from the set
# The Mode value is the value that appears the most number of times
# Mode = most common value from the set
mo = stats.mode(speed)
print("\nprinting the mode value from the set: ", end="\n")
print(mo)
# print("{:4.f}".format(mo))
