# Question7:
#
# Write a program to implement concept of multilevel inheritance in python

# --------------------------------------------------------------------------------------

# Object-oriented Programming -- Python
# Multilevel Inheritance

# Example: Student Details

class student:  # Base class
    def __init__(self):
        self.rollnumber = None
        self.name = None

    def get_data(self, rollnumber, name):
        self.rollnumber = rollnumber
        self.name = name

    def put_data(self):
        return self.rollnumber, self.name


class subject(student):  # Intermediate class
    def __init__(self):
        super().__init__()
        self.sub1 = None
        self.sub2 = None
        self.sub3 = None

    def get_marks(self, sub1, sub2, sub3):
        self.sub1 = sub1
        self.sub2 = sub2
        self.sub3 = sub3

    def put_marks(self):
        return self.sub1, self.sub2, self.sub3


class result(subject):  # Derived class
    def __init__(self):
        super().__init__()
        self.total = 0
        self.percent = 0

    def display(self):
        self.total = self.sub1 + self.sub2 + self.sub3
        self.percent = (self.total / 300) * 100
        print("Roll Number: {} | Name: {} | Total Marks: {} | Percentage: {:.2f}%".format(self.rollnumber, self.name,
                                                                                          self.total, self.percent),
              end="\n")


# Main Method

std1 = result()
std1.get_data(1, "abc")
std1.get_marks(96, 94, 99)
std1.display()

std2 = result()
std2.get_data(2, "xyz")
std2.get_marks(99, 97, 98)
std2.display()

