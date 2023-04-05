# Object oriented programming

# Constructor:
#
#     special method: __init__
#       - used for initialise the parameters.
#       - t will call automatically. It executes for every object

class person:
    def __init__(self, name, id):
        self.name = name
        self.id = id

    def config(self):
        print("Data is ", self.name, self.id)


obj1 = person("ABC", 11)
obj2 = person("XYZ", 12)

obj1.config()
obj2.config()
