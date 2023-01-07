# # Functions:
#
# Change Global Variable Without Changing Local Variable

a = 10
print("\nValue of variable \"a\" is {} and Id is {}".format(a, id(a)), end='\n\n')


def fun():
    a = 9
    x = globals()['a']
    print("Value of variable \"x\" is {} and Id is {}".format(x, id(x)), end='\n')
    print("Inside the function \"a\": ", a, end='\n')
    globals()['a'] = 15  # Changing the value of global variable inside the function


fun()
print("Outside the functions value of variable \"a\" is {} and Id is {}".format(a, id(a)), end='\n')
