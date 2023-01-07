# Loops - for loop


print("Ex. Reverse of number series")

for i in range(10,1,-1):
    print(i)

#############################################
print("\n")

print("Ex. dict")

for i in [2,3,4]:
    print(i)

############################################
print("\n")

print("Ex. 1 to 10 numbers")

for i in range(1, 11):
    print(i)

############################################
print("\n")

print("Ex. To print value divisible by 5")

print("Method1: ")
for i in range(0, 21, 5):
    print(i)

print("\n")

print("Method2: ")
for i in range(21):
    if (i % 5 == 0):
        print(i)
