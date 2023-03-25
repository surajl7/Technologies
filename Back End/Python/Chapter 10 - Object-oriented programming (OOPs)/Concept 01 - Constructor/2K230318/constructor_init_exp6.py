# Object-oriented programming
#
# Constructor:
#
# Exp6: Account details

class accounts:
    def __init__(self, accNum, name, amount):
        self.accNum = accNum
        self.name = name
        self.amount = amount

    def display(self):
        print("Account details:", self.accNum, self.name, self.amount)


accdetails1 = accounts(123456789, "accHolder1", 987654321)
accdetails2 = accounts(987654321, "accHolder2", 123456789)

accdetails1.display()
accdetails2.display()
