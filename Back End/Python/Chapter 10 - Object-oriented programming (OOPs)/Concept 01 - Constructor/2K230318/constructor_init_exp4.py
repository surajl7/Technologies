# object-oriented programming
#
# constructor:
# Exp4: Employees data

class employees:
    def __init__(self, name, emp_id, dept):
        self.name = name
        self.emp_id = emp_id
        self.dept = dept

    def config(self):
        print("Employee details:", self.name, self.emp_id, self.dept)


emp1 = employees("emp1", 100, "dep1")
emp2 = employees("emp2", 101, "dep2")

emp1.config()
emp2.config()
