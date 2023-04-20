# Question8:
#
# Write a program to create class employee with ID and Name display its contents

# -----------------------------------------------------------------------------------------

class employee:
    def __init__(self, id, name):
        self.id = id
        self.name = name

    def getdata(self):
        print("ID: {} | Name: {}".format(self.id, self.name))


emp1 = employee(1, "abc")

emp1.getdata()
