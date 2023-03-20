# Object-oriented programming
#
# Inheritance:
#     4.  Hierarchical Inheritance

# Base class -----------------------------------------------
class students:
    def __init__(self):
        self.rollnum = None
        self.name = None

    def get_data(self, rnum, std_name):
        self.rollnum = rnum
        self.name = std_name

    def display(self):
        print("Roll number:", self.rollnum, "|", "Name:", self.name, end="\n")


# Intermediate class1 -----------------------------------------------
class arts(students):
    def __init__(self):
        self.arts_sub1 = None

    def get_marks(self, sub1):
        self.arts_sub1 = sub1

    def put_marks(self):
        print("Arts:", end="\n")
        #students.display(self)
        print("Subject1 marks:", self.arts_sub1, end="\n")


# Intermediate class2 -----------------------------------------------
class medical(students):
    def __init__(self):
        self.med_sub1 = None

    def get_marks(self, sub1):
        self.med_sub1 = sub1

    def put_marks(self):
        print("Medical:", end="\n")
        #students.display(self)
        print("Subject1 marks:", self.med_sub1, end="\n")


# Intermediate class3 (base class2)-----------------------------------------------
class engineering(students):
    def __init__(self):
        self.engg_sub1 = None

    def get_marks(self, sub1):
        self.engg_sub1 = sub1

    def put_marks(self):
        print("Engineering:", end="\n")
        #students.display(self)
        print("Subject1 marks:", self.engg_sub1, end="\n")


# sub Intermediate class1 -----------------------------------------------
class mechanical(engineering):
    def __init__(self):
        self.mech_sub1 = None
        self.mech_sub2 = None
        self.mech_sub3 = None

    def get_marks(self, sub1, sub2, sub3):
        self.mech_sub1 = sub1
        self.mech_sub2 = sub2
        self.mech_sub3 = sub3

    def put_marks(self):
        print("Mechanical Department:", end="\n")
        #students.display(self)
        print("Subject1 marks:", self.mech_sub1, end="\n")
        print("Subject2 marks:", self.mech_sub2, end="\n")
        print("Subject3 marks:", self.mech_sub3, end="\n")


# sub Intermediate class2 -----------------------------------------------
class electronics(engineering):
    def __init__(self):
        self.etx_sub1 = None

    def get_marks(self, sub1):
        self.etx_sub1 = sub1

    def put_marks(self):
        print("Electronics Department:", end="\n")
        #students.display(self)
        print("Subject1 marks:", self.etx_sub1, end="\n")


# sub Intermediate class3 -----------------------------------------------
class civil(engineering):
    def __init__(self):
        self.civil_sub1 = None

    def get_marks(self, sub1):
        self.civil_sub1 = sub1

    def put_marks(self):
        print("Civil Department:", end="\n")
        #students.display(self)
        print("Subject1 marks:", self.civil_sub1, end="\n")


# Main method -----------------------------------------------

# std = students()
std1 = arts()
std2 = medical()
std3 = engineering()
std4 = mechanical()
std5 = electronics()
std6 = civil()

# Arts --------------------
std1.get_data(1, "abc")
# std.display()
std1.display()
std1.get_marks(99)
std1.put_marks()
print(end="\n")

# Medical --------------------
std2.get_data(2, "med_stud")
std2.display()
std2.get_marks(98)
std2.put_marks()
print(end="\n")


# Engineering ----------------
std3.get_data(3, "engg_stud")
std3.display()
std3.get_marks(97)
std3.put_marks()
print(end="\n")


# Mechanical --------------------
std4.get_data(4, "mech_stud")
std4.display()
std4.get_marks(96, 98, 99)
std4.put_marks()
print(end="\n")


# Electronics --------------------
std5.get_data(5, "etx_stud")
std5.display()
std5.get_marks(100)
std5.put_marks()
print(end="\n")


# Civil --------------------
std6.get_data(6, "civil_stud")
std6.display()
std6.get_marks(95)
std6.put_marks()
print(end="\n")
