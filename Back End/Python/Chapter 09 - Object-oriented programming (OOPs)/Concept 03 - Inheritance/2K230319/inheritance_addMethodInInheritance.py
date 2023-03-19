# Object-oriented programming
#
# Inheritance
#
# Add method in inheritance

class person:
    def __init__(self, fname, lname):
        self.firstName = fname
        self.lastName = lname

    def display(self):
        print(self.firstName, self.lastName)


class student(person):
    def __init__(self, fname, lname, year):
        person.__init__(self, fname, lname)
        self.addYear = year

    def student_details(self):
        print(self.firstName, self.lastName, self.addYear)


obj1 = student("abc", "pqr", 2007)
obj2 = student("srt", "xzy", 2008)

print("Persons details: ", end="\n")
obj1.display()
obj2.display()

print("\nStudent details: ", end="\n")
obj1.student_details()
obj2.student_details()
