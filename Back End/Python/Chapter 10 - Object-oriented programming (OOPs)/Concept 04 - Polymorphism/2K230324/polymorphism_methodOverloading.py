# Object-oriented programming

# Polymorphism:
#     1.  Function Overloading
#     2.  Function Overriding
#     3.  Operator Overloading

# 2. Method Overloading Example: --->

class student:
    # def __init__(self, m1, m2):
    #     self.m1 = m1
    #     self.m2 = m2

    def sum(self, a=None, b=None, c=None):

        s = 0

        # if a != None and b != None and c != None:
        if a is not None and b is not None and c is not None:
            s = a + b + c
        # elif a! = None and b != None:
        elif a is not None and b is not None:
            s = a + b
        else:
            s = a

        return s


s1 = student()
print(s1.sum(5))
print(s1.sum(10, 20))
print(s1.sum(30, 40, 50))
