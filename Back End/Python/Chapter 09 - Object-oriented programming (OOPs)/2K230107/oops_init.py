# Object-Oriented Programming System (OOPs):
#
# __init__ (Special Method)
#     - Used for initialise the parameters
#     - It will call automatically
#     - It executes for every object

class person:
    def __init__(self, name, id):
        self.name = name
        self.id = id

    def config(self):
        print("Data is", self.name, self.id)


obj1 = person("Abc", 11)
obj2 = person("Xyz", 12)

obj1.config()
obj2.config()
