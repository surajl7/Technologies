# Object-oriented programming
#
# Constructor:
#
# Exp5: Student data

class students:
    def __init__(self, name, rollnum, marks):
        self.name = name
        self.rollnum = rollnum
        self.marks = marks

    def display(self):
        print("Student details:", self.name, self.rollnum, self.marks)


std1 = students("stdName1", 1, 99)
std2 = students("stdName2", 2, 100)

std1.display()
std2.display()
