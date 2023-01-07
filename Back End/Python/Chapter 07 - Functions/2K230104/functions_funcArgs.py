# Functions:
#
# Note:
#     "Call by value" and "Call by Reference is not present"

# Arguments in functions:
#     1. Actual Arguments
#         a. position
#         b. keyword
#         c. Default
#         d. Variable length

# a. Position -->
def person(name, age):
    print("\nArgument Position: -->", end='\n')
    print("name: ", name, end='\n')
    print("age: ", age, end='\n')


person("abc", 25)


# b. Keyword -->
def person1(name, age):
    print("\nArguments keyword: --> ", end='\n')
    print("Name: ", name, end='\n')
    print("Age: ", age, end='\n')


person1(age=25, name='abc')


# c. Default -->
def person2(name, age=18):
    print("\nArgument Default: --> ", end='\n')
    print("Name: ", name, end='\n')
    print("Age: ", age, end='\n')


person2('abc')


# d. Variable length (Method 1)
def sum(a, *b):
    print("\nArgument variable length [Method1]: --> ", end='\n')
    c = a
    for i in b:
        c = c + i
    print("sum = ", c, end='\n')


# sum(5, 6, 34, 78)
sum(1, 1, 1, 1)


# d. Variable length (Method 2)
def sum(*b):
    print("\nArguments variable length [Method2]: --> ", end='\n')
    c = 0
    for i in b:
        c = c + i
    print("sum = ", c, end='\n')


sum(1, 1, 1, 1)

