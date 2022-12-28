# Conditinal Statements

# 1. Decision making

# conditional Statements - if-else 

# Ex. Student Mark-sheet

name = input("Enter your name: ")

sub1 = float(input("Enter marks of subject1: "))
sub2 = float(input("Enter marks of subject2: "))
sub3 = float(input("Enter marks of subject3: "))
print("\n")

print("Name of Student: ", name)
totalMarks = sub1+sub2+sub3
# print("Total maraks:", totalMarks)
print("Total maraks: {:.2f}".format(totalMarks))
per = (totalMarks/300)*100
print("Percentage: {:.2f}".format(per))


if (per >= 80 and per < 100):
    print("Congratulations {}! you have passed with distinction".format(name))
elif (per >= 70 and per < 80):
    print("Congratulations {}! you have passed with first class".format(name))
elif (per > 60 and per < 70):
    print("Congratulations {}! you have passed with second class".format(name))
elif (per > 40 and per < 60):
    print("Congratulations {}! you passed the exam".format(name))
else:
    print("Result - Fail")

print("\n")
