# Machine Learning
import numpy
# Percentiles:

# Use the NumPy percentile() method to find the percentiles:

import numpy

ages = [5, 31, 43, 48, 50, 41, 7, 11, 15, 39, 80, 82, 32, 2, 8, 6, 25, 36, 27, 61, 31]

print("The age that 75% of the people are younger:", end="\n")
x = numpy.percentile(ages, 75)
print(x, end="\n")

print("The age that 90% of the people are younger:", end="\n")
print(numpy.percentile(ages, 90), end="\n")


