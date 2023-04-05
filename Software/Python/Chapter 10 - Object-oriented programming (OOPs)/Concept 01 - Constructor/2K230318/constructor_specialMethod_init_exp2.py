# Object-Oriented programming
#
# Constructor:
#     self --> refer to object

class person:
    def __init__(self):
        self.name = "ABC"
        self.age = 25

    def update(self):
        self.age = 12


c1 = person()
c2 = person()

c1.name = "Rashi"
c2.age = 20

c1.update()

print(c1.name, c1.age)
print(c2.name, c2.age)
