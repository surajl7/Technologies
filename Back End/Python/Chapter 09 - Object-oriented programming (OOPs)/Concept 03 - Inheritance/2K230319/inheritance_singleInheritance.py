# Object-Oriented programming
#
# Inheritance:
#     1. Single Inheritance

class base_class:
    def __init__(self):
        self.a = 0
        self.b = 0

    # def fun1(self, num1, num2):
    #     self.a = num1
    #     self.b = num2

    def get_ab(self, num1, num2):
        self.a = num1
        self.b = num2
        print(end="\n")

    def get_a(self):
        return self.a

    def show_b(self):
        print("b = ", self.b, end="\n")


class derived_class(base_class):
    def __init__(self):
        base_class.__init__(self)
        self.c = 0

    def multiplication(self):
        print("Inside the class:", end="\n")
        print("a = ", base_class.get_a(self), end="\n")
        base_class.show_b(self)

        self.c = self.b * base_class.get_a(self)
        return self.c

    def display(self):
        print("\nDisplaying all the values: ", end="\n")
        # print("a = ", base_class.get_a(self), end="\n")
        # print("b = ", self.b, end="\n")
        print("c = b * a ", "|", self.c, "=", self.b, "*", self.a, end="\n")


a = int(input("Enter num1 value: "))
b = int(input("Enter num2 value: "))
obj1 = derived_class()

obj1.get_ab(a, b)
print("Outside the class: a = ", obj1.get_a(), end="\n")
print("Outside the class: ", end=" ")
obj1.show_b()

obj1.multiplication()

obj1.display()

print("\nUpdating the value of b...", end="\n")
# obj1.num2 = 30
obj1.b = int(input("Enter new value for b: "))
print("Displaying value of b: ", end=" ")
obj1.show_b()

obj1.multiplication()
obj1.display()
