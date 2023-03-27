# Object-Oriented programming
#
# Polymorphism
#     2. Method overriding

# Example: Without overriding

print("Without overriding: -->", end="\n")


class A:
    # @staticmethod
    def show(self):
        print("In class A", end="\n")


class B(A):
    pass


a1 = B()
a1.show()


print("------------------------------------------------", end="\n")

# Example: Without overriding

print("\nWith Overriding: --> ", end="\n")


class A_:
    # @staticmethod
    def show_(self):
        print("In A class", end="\n")


class B_(A_):
    def show_(self):
        print("In class B", end="\n")


a1_ = B_()
a1_.show_()


# NOTE:
#     In overriding function\method name and arguments are same, and when at the time of calling the function
#     from a derived class which have the same name as base class. only the definition of derived class will get
#     execute.
