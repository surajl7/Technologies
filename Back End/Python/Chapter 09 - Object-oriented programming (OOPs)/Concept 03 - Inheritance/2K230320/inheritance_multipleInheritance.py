# Object-oriented programming
#
# Inheritance:
#     3.  MultipleInheritance

# base class 1 ------------------------------------------------------------
class base_class1:
    def __init__(self):
        self.num1 = 0

    def get_num1(self, a):
        self.num1 = a


# base class 2 ------------------------------------------------------------
class base_class2:
    def __init__(self):
        self.num2 = 0

    def get_num2(self, b):
        self.num2 = b


# derived class ------------------------------------------------------------
class derived_class(base_class1, base_class2):
    def display(self):
        print("Value of num1:", self.num1, end="\n")
        print("Value of num2:", self.num2, end="\n")
        print(self.num1, "*", self.num2, "=", self.num1 * self.num2, end="\n")


# Main Method ------------------------------------------------------------
obj1 = derived_class()
obj2 = derived_class()

obj1.get_num1(10)
obj1.get_num2(20)

obj2.get_num1(30)
obj2.get_num2(40)

print(end="\n")
obj1.display()
print(end="\n")
obj2.display()

