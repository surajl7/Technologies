# Object-oriented programming
#
# Methods:
#     3.  Static Methods
#
# Static function -->
#
#     class person:
#          def func2(age):
#              return age > 18

class person:

    @staticmethod
    def function_name(age):
        return age > 18


print(person.function_name(20))

# num = int(input("Enter the number: "))
#
# if person.function_name(num):
#     print("Greater than 18", end="\n")
# else:
#     print("Less than 18", end="\n")
