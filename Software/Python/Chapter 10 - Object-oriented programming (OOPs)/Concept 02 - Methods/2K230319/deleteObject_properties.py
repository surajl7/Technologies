# Object-oriented programming
#
# Delete object properties:
#     Syntax:
#         del p1.age
#
#     delete object:
#         del p1

class students:
    def __init__(self, m1, m2, m3):
        self.m1 = m1
        self.m2 = m2
        self.m3 = m3

    def avg(self):
        return (self.m1 + self.m2 + self.m3) / 3

try:
    s1 = students(4, 5, 6)
    s2 = students(6, 7, 8)
    s3 = students(1, 2, 3)

    del s1.m1       # deleting m1 variable in s1 object
    del s2          # deleting s2 object

    print(s1.avg())  # printing average of given numbers
    print(s2.avg())  # printing average of given numbers to object s2
except AttributeError:
    print("missing Attribute or attribute got deleted", end=" ")
except NameError:
    print("missing object or object got deleted", end=" ")

# ErrorLogs:
#     1. AttributeError: 'students' object has no attribute 'm1'. Did you mean: 'm2'?
#     2. NameError: name 's2' is not defined. Did you mean: 's1'?
