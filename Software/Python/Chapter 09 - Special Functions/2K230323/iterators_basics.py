# Iterators:
#
# Iterators in Python
#     It is an object with contains a countable number of values to methods
#     1. __iter__()
#     2. __next__()

print("With tuple")
m = ("apple", "banana", "chery")
m1 = iter(m)
print(next(m1))
print(next(m1))
print(next(m1))

print("-----------------------------------------------")

print("With string")
str1 = "banana"
s = iter(str1)
print(next(s))
print(next(s))
print(next(s))
print(next(s))
print(next(s))
print(next(s))

print("-----------------------------------------------")

print("Using loop")

alf = ("a", "b", "c")
for x in alf:
    print(x)

print("-----------------------------------------------")

print("Using loop - with string")

mystr = "banana"
for x in mystr:
    print(x)


