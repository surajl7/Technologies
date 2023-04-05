# Functions:
#
# Keyword Variable Length Arguments

# Method1 -->
def person(name, **data):
    print("\nKeyword Variable Length Arguments [Method1] --> ", end='\n')
    print("Name: ", name, end='\n')
    print("data: ", data, end='\n')


person("abc", age=25, city="Kolhapur", mob=9876543210)


# Method2: with for loop -->
def person1(name, **data):
    print("\nKeyword Variable Length Arguments [Method2] --> ", end='\n')
    print("Name: ", name, end='\n')
    for i, j in data.items():
        print(i, j, sep=' ', end='\n')


person1("abc", age=18, city="Kolhapur", mob='9087654321')

print(end='\n')
