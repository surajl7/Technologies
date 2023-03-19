# Object-oriented programming
#
# Inheritance:

class person:
    def __init__(self, fname, lname):
        self.firstName = fname
        self.lastName = lname

    def printName(self):
        print(self.firstName, self.lastName)
        # return self.firstName, self.lastName


class student(person):
    pass                    # pass used to exclude the code


x = student("ABC", "XYZ")
print("Student details: ", end=" ")
x.printName()

# print("Student details: ", x.printName(), end="\n")
