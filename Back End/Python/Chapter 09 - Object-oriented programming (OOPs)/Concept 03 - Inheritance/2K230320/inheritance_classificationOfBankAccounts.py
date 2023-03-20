# Object-oriented programming
#
# Inheritance:
#
# Ex: Classification of bank accounts

class accounts:
    def __init__(self):
        self.account_number = None
        self.account_type = None
        self.balance = None
        self.interest_rate = None
        self.total_returns = None

    def account_number_fun(self, acc_num):
        self.account_number = acc_num

    def account_type_fuc(self, ch):
        if ch == "s" or ch == "S":
            self.account_type == "Savings"
        elif ch == "c" or ch == "C":
            self.account_type == "Current"
        elif ch == "fd" or ch == "FD":
            self.account_type == "Fixed deposit"
        else:
            print("Invalid input :(")

    def balance_fun(self, bal):
        self.balance = bal

    def returns_fun(self, interest_rate):
        self.interest_rate = interest_rate
        self.total_returns = (self.interest_rate * self.balance) + self.balance
        return self.total_returns

    def display(self):
        print("Account number | Account type | Balance | Total returns", end="\n")
        # print(self.account_number, "|", self.account_type, "|", self.balance, end="\n")


class savings(accounts):
    # def __init__(self):
    #     self.interest_rate = 0.04
    #     self.total_returns = None

    def display(self):
        accounts.returns_fun(self, 0.04)
        print(self.account_number, "|", self.account_type, "|", self.balance, "|", self.total_returns, end="\n")


class current(accounts):
    # def __init__(self):
    #     self.interest_rate = 0
    #     self.total_returns = None

    def display(self):
        accounts.returns_fun(self, 0)
        print(self.account_number, "|", self.account_type, "|", self.balance, "|", self.total_returns, end="\n")


class fixed_deposite_fun(accounts):
    # def __init__(self):
    #     self.interest_rate = 0.06
    #     self.term_type = None

    def term_type_fun(self, ch):
        if ch == "s" or ch == "S":
            self.term_type = "Short Term"
        elif ch == "m" or ch == "M":
            self.term_type = "Medium Term"
        elif ch == "l" or ch == "L":
            self.term_type = "Long Term"
        else:
            print("Invalid Input :(")

    def fd_return_fun(self):
        self.total_returns = (self.interest_rate * self.total_returns) + self.balance
        return self.total_returns

    def display(self):
        print("Account number | FD Investment term | Balance | Total returns", end="\n")


class fd_short_fun(fixed_deposite_fun):
    # def __init__(self):
    #     self.interest_rate = 0.06
    #     self.total_returns = None

    def display(self):
        fixed_deposite_fun.fd_returns_fun(self, 0.06)
        print(self.account_number, "|", self.term_type, "|", self.balance, "|", self.total_returns, end="\n")


class fd_medium_fun(fixed_deposite_fun):
    # def __init__(self):
    #     self.interest_rate = 0.07
    #     self.total_returns = None

    # def return_fun(self):
    #     self.total_returns = (self.interest_rate * self.total_returns) + self.balance
    #     return self.total_returns


    def display(self):
        fixed_deposite_fun.fd_returns_fun(self, 0.07)
        print(self.account_number, "|", self.term_type, "|", self.balance, "|", self.total_returns, end="\n")


class fd_long_fun(fixed_deposite_fun):
    # def __init__(self):
    #     self.interest_rate = 0.09
    #     self.total_returns = None
    #
    # def return_fun(self):
    #     self.total_returns = (self.interest_rate * self.total_returns) + self.balance
    #     return self.total_returns

    def display(self):
        fixed_deposite_fun.fd_returns_fun(self, 0.09)
        print(self.account_number, "|", self.term_type, "|", self.balance, "|", self.total_returns, end="\n")


acc1 = savings()
acc1.account_number_fun(11111)
acc1.account_type_fuc("s")
acc1.display()

