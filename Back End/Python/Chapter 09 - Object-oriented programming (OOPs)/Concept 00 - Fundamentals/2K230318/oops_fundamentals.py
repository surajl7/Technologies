# Object-oriented programming
#     Function
#     Object
#     Procedure
#
# properties of object:
#     1.  Attributes  --> variables
#     2.  Behaviours  --> functions
#
# Syntax: class and objects
#     class classname:
#         attributs
#         behavior


class computer:
    def config(self):
        print("Hi")

com1 = computer()
com2 = computer()
# computer = config(com1) --> This won't work

com1.config()
com2.config()
