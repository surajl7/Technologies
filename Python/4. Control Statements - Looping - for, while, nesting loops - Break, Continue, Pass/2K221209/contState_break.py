# Control Statements

# 1. Break

avl = 5

x = int(*input("How many candies you want? --> "))

i = 1

while i <= x:
    if i > avl:
        print("Out of stock")
        break
    print("Candy")
    i += 1
