# Conditinal Statements

# 1. Decision making

# conditional Statements - if-else 

# Ex. To find profit or loss
# ?Note: cp - Cost Price and sp - selling price
# SP > CP --> Profit
# CP > SP --> Loss


cstPrice = float(input("Enter the cost price: "))
selPrice = float(input("Enter the Selling Price: "))

if (cstPrice > selPrice):
    print("Loss:",cstPrice-selPrice)
else:
    print("Profit:",selPrice-cstPrice)
