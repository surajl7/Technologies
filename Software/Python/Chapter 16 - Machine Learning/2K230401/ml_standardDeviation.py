# Machine Learning

import numpy
import math

speed1 = [86, 87, 88, 86, 87, 85, 86]
# Standard deviation: 0.9

speed2 = [32, 111, 138, 28, 59, 77, 97]
# Standard deviation: 37.85


# Ex: Standard Deviation
print("\nFinding the standard deviation:", end="\n")

print("Example1:-->", end="\n")
sd1 = numpy.std(speed1)
print(sd1)
print("{:.1f}".format(sd1))

print("Example2:-->", end="\n")
sd2 = numpy.std(speed2)
print(sd2)
print("{:.2f}".format(sd2))


# Ex: variance
print("\nFinding the variance: ", end="\n")

# NOTE:
# To calculate the variance from the set of values
# 1. Find the mean
# 2. For each value, find the difference from the mean
# 3. For each difference, find the square value
# 4. The variance is the average number of these squared differences

print("Example1: -->", end="\n")
var1 = numpy.var(speed1)
print(var1)
print("{:.2f}".format(var1))

print("Example2: -->", end="\n")
var2 = numpy.var(speed2)
print(var2)
print("{:.2f}".format(var2))

print("\nFinding the standard deviation from the variance: ", end="\n")

print("Example1: -->", end="\n")
print(math.sqrt(var1))
print("{:.1f}".format(math.sqrt(var1)))
print(math.pow(var1, 0.5))
print("{:.1f}".format(math.pow(var1, 0.5)))

print("Example2: -->", end="\n")
print(math.sqrt(var2))
print("{:.2f}".format(math.sqrt(var2)))
print(math.pow(var2, 0.5))
print("{:.2f}".format(math.pow(var2, 0.5)))


# NOTE:
# Standard Deviation is often represented by the symbol Sigma: σ
# Variance is often represented by the symbol Sigma Square: σ^2






