# Control Statement

# Ex. Finding if given number is prime or not

num = int(input("Enter the number: "))

for i in range(2,num):
    if num % i == 0:
        print(num, " Not prime")
        break
else:
    print(num, " Prime")
