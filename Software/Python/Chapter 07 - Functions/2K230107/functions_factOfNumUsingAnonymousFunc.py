# Functions:
#
# Ex. finding factorial of number using anonymous / lambda function

num = int(input("\nEnter the number: "))

fact = lambda fact_num: 1 if fact_num == 0 else fact_num * fact(fact_num - 1)

print("Factorial of {}! is {}".format(num, fact(num)))
