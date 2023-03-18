# Object-oriented programming
#
# Variables:
#     1.  Instance variable
#     2.  Class variable (static)
#
# 1. Instance variable
#     - It changes the value of variable per object

class car:
    wheel = 4

    def __init__(self):
        self.mil = 10  # instance variable
        self.com = "BMW"  # instance variable


c1 = car()
c2 = car()

c1.mil = 20
car.wheel = 5
print(c1.com, c1.mil, c1.wheel)
print(c1.com, c2.mil, c2.wheel)
