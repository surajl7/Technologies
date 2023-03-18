# Object-oriented programming
#
# Constructor:
# Ex: Books Library

class books:
    def __init__(self, name, author, book_number):
        self.name = name
        self.author = author
        self.book_number = book_number

    def config(self):
        print("Data is:", self.name, self.author, self.book_number)


obj1 = books("book1", "book1Auth", 1)
obj2 = books("book2", "book2Auth", 2)

print("Calling object variables: ")
print(obj1.name, obj1.author, obj1.book_number)
print(obj2.name, obj2.author, obj2.book_number)

print("\n")

print("Calling object variables with function: ")
obj1.config()
obj2.config()
