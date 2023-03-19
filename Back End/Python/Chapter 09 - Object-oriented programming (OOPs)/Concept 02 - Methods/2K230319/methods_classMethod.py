# Object-oriented programming
#
# Methods:
#     2.  Class method
#
# syntax:
# class function -->
#
#     class person:
#         def fun(cls, name, age):
#             return cls (name, age)
####################################################################
# class person:
#     cl = "abc"
#
#     def __init__(self, name, age):
#         self.name = name
#         self.age = age
#
#     @classmethod
#     def details(cls):
#         return cls.cl
#
#     ## def display(self):
#     ##  print("Person details are:", self.name, self.age)
#
#
# ## print(person.details("ABC", 20)
# ## print(person.details(name="abc",age=20))
#
# print(person.details())

###################################################################

class person:
    name = "abc"
    age = 20

    def __init__(self, name, age):
        self.name = name
        self.age = age

    @classmethod
    def details(cls):
        return cls.name, cls.age


print(person.details())
