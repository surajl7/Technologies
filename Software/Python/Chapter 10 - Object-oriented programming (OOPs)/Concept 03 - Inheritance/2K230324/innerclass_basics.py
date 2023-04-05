# Inheritance
#
# Inner class:
#     A class within a class is called inner class

class students:
    def __init__(self, name):
        self.n = name
        self.lap = laptop()

    def show(self):
        print(self.n)
        self.lap.show()


class laptop:
    def __init__(self):
        self.com = "DELL"

    def show(self):
        print(self.com)


s1 = students("ABC")
s1.show()


# NOTE:
#     sequence of class's and functions dones not matter in python, we can define any class or any function at any
#     location of source code and also call it from anywhere.
