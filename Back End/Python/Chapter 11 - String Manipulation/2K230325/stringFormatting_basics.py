# String Formatting:
#
# Format():
#     format() method allows you to format selected parts of a string

print("----------------------------------", end="\n")
p = 49
text = "The price of product is {} \n"
print(text.format(p))

print("----------------------------------", end="\n")
a = 10
txt = "value is {:.2f}\n"
print(txt.format(a))

print("----------------------------------", end="\n")
q = 3
item = 567
price = 49

order = "q: {} | item no: {} | price: {:.2f}\n"
print(order.format(q, item, price))

print("----------------------------------", end="\n")
print("Using index number: ", end="\n")

order = "q: {0} | no of items: {1} | price: {2:.2f}"
print(order.format(q, item, price))

order = "q: {2} | no of items: {1} | price: {0:.2f}"
print(order.format(q, item, price))

print("----------------------------------", end="\n")
print("Using named index: ", end="\n")

order = "I have a {carname}, it is a {model}"
print(order.format(carname="Ford", model="Mustang"))

