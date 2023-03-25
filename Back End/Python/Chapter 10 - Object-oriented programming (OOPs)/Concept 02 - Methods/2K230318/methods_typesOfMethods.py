# Object-oriented programming
#
# Methods:
#     1.  Instance method
#     2.  Class method (classmethod)
#     3.  Static method (staticmethod)
#
# 1. Instance Method:
#     Instance function

class student:
    school = "school_name"

    def __init__(self, m1, m2, m3):
        self.m1 = m1
        self.m2 = m2
        self.m3 = m3

    def display(self):
        print(self.m1, self.m2, self.m3)

    def avg(self):  # instance method
        return (self.m1 + self.m2 + self.m3) / 3


s1 = student(4, 5, 6)
s2 = student(6, 7, 8)

print("Displaying output: ")
print(s1.avg())
print(s2.avg())
