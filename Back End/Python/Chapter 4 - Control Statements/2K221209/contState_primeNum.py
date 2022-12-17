# Control Statement

# Ex. Finding if given number is prime or not

count = int(input("Enter the count: "))

for i in range(2,count):
    if count % i == 0:
        print(i, " Not prime")
        #break
else:
    print(i, " Prime")
