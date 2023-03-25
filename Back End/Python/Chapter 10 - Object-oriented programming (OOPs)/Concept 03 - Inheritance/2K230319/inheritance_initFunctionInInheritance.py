# Object-Oriented programming
#
# Inheritance:
#
#     __init__ function in inheritance

class person:
    def __init__(self, fname, lname):
        self.firstName = fname
        self.lastName = lname

    def display(self):
        print(self.firstName, self.lastName)


class student(person):          # student class inherited from person class
    def __init__(self, fname, lname):
        person.__init__(self, fname, lname)


obj1 = student("abc", "xyz")
obj2 = student("pqr", "cvb")

print("Student1 details: ", end=" ")
obj1.display()
# print(end="\n")
print("Student2 details: ", end=" ")
obj2.display()
