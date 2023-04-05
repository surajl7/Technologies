# Object-oriented programming
#
# Inheritance:
#     2.  Multilevel inheritance


# Base class --------------------------------------------------------
class students:
    def __init__(self):
        self.rollnumber = 0

    def get_number(self, rnum):
        self.rollnumber = rnum

    def put_number(self):
        return self.rollnumber


# Intermediate class --------------------------------------------------------
class test(students):  # first level derivation
    def __init__(self):
        self.sub1 = 0
        self.sub2 = 0

    def get_marks(self, sb1, sb2):
        self.sub1 = sb1
        self.sub2 = sb2

    def put_marks(self):
        print("Marks in subject1: ", self.sub1)
        print("Marks in subject2: ", self.sub2)


# Derived class --------------------------------------------------------
class result(test):  # second level derivation
    def __init__(self):
        self.total = 0

    def display(self):
        self.total = self.sub1 + self.sub2

        print(end='\n')
        print("Roll number:", students.put_number(self), end="\n")
        test.put_marks(self)

        print("Roll number:", self.rollnumber, "|", "Total marks:", self.total, end="\n")
        print(end='\n')


# Main Method --------------------------------------------------------

std1 = result()

std1.get_number(10)
std1.get_marks(99, 100)
std1.display()

std2 = result()

std2.get_number(20)
std2.get_marks(98, 99)
std2.display()

print(end="\n")
