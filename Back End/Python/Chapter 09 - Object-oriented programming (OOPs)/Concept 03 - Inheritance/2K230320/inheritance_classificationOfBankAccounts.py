# Object-oriented programming
#
# Inheritance:
#
# Ex: Classification of bank accounts

class accounts:
    def __init__(self):
        self.account_number = None
        self.balance = None
        self.interest_rate = None
        self.total_returns = None

    def account_number_fun(self, acc_num):
        # self.account_number = int(input("Enter account number: "))
        self.account_number = acc_num

    def balance_fun(self, bal):
        # self.balance = int(input("Enter amount to be deposited: "))
        self.balance = bal

    def returns_fun(self, interest_rate):
        self.interest_rate = interest_rate
        self.total_returns = (self.interest_rate * self.balance) + self.balance
        return self.total_returns

    def display_acc(self):
        print("Account number | Account type | Balance | Total returns", end="\n")


class savings(accounts):
    def __init__(self):
        self.account_type = "Savings"

    def display_savings(self):
        accounts.returns_fun(self, 0.04)
        accounts.display_acc(self)
        print(self.account_number, "|", self.account_type, "|", self.balance, "|", self.total_returns, end="\n")


class current(accounts):
    def __init__(self):
        self.account_type = "Current"

    def display_current(self):
        accounts.returns_fun(self, 0)
        print(self.account_number, "|", self.account_type, "|", self.balance, "|", self.total_returns, end="\n")


class fixed_deposit_fun(accounts):
    def __init__(self):
        self.account_type = "Fixed Deposit"
        self.total_returns = None

    def fd_return_fun(self, interest_rate):
        self.interest_rate = interest_rate
        self.total_returns = (self.interest_rate * self.total_returns) + self.balance
        return self.total_returns

    def display_fd(self):
        print("Account number | FD Investment term | Balance | Total returns", end="\n")


class fd_short_fun(fixed_deposit_fun):
    def __init__(self):
        self.term_type = "Short term Fixed Deposit"

    def display_fd_s(self):
        fixed_deposit_fun.fd_return_fun(self, 0.06)
        fixed_deposit_fun.display_fd(self)
        print(self.account_number, "|", self.term_type, "|", self.balance, "|", self.total_returns, end="\n")


class fd_medium_fun(fixed_deposit_fun):
    def __init__(self):
        self.term_type = "Medium term Fixed Deposit"

    def display_fd_m(self):
        fixed_deposit_fun.fd_return_fun(self, 0.07)
        fixed_deposit_fun.display_fd(self)
        print(self.account_number, "|", self.term_type, "|", self.balance, "|", self.total_returns, end="\n")


class fd_long_fun(fixed_deposit_fun):
    def __init__(self):
        self.term_type = "Long term Fixed Deposit"

    def display_fd_l(self):
        fixed_deposit_fun.fd_return_fun(self, 0.09)
        fixed_deposit_fun.display_fd(self)
        print(self.account_number, "|", self.term_type, "|", self.balance, "|", self.total_returns, end="\n")


acc1 = savings()
acc1.account_number_fun(1111)
acc1.balance_fun(100)
acc1.display_savings()


acc2 = fd_short_fun()
acc2.account_number_fun(2222)
acc2.balance_fun(100)
acc2.display_fd_s()
