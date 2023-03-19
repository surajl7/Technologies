# Object-oriented programming
#
# Inheritance:
#
#     add properties in child class

class person:
    def __init__(self, fname, lname):
        self.firstName = fname
        self.lastName = lname

    def display(self):
        print(self.firstName, self.lastName)


class student(person):
    def __init__(self, fname, lname, address):
        person.__init__(self, fname, lname)
        self.city = address

    def student_details(self):
        print(self.firstName, self.lastName, self.city)


# obj1 = student("abc", "xyz")
obj1 = student("abc", "xyz", "Kolhapur")
obj2 = student("pqr", "stu", "Pune")

# obj1.display()
obj1.student_details()
obj2.student_details()
