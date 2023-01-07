# Array:
#
# Array Operations
#
# Matrix:
#     1. Matrix Creation

from numpy import *

pages = int(input("Enter num of Pages: "))
rows = int(input("Enter num of rows: "))
clms = int(input("Enter num of columns: "))

lis = []

for k in range(0, pages, 1):
    for i in range(0, rows, 1):
        for j in range(0, clms, 1):
            lis.append(int(input("arr1[{}][{}][{}]: ".format(k, i, j))))

arr1 = array(lis).reshape(pages, rows, clms)
print("\nArray arr1: ", end='\n')
print(arr1, end='\n')

# Matrix creation from array

m = matrix(arr1)
print("\nMatrix of arr1: ", end='\n')
print(arr1, end='\n')

# Matrix creation from direct elements:

m1 = matrix('6 2 3; 4 5 6; 7 8 9')
m2 = matrix('1 2 3; 4 5 1')

print("\nMatrix m1: ", end='\n')
print(m1, end='\n')

print("\nMatrix m2: ", end='\n')
print(m2, end='\n')

print("\nDiagonal of matrix m: ", diagonal(m), end='\n')
print("Diagonal of matrix m1: ", diagonal(m1), end='\n')
print("Diagonal of matrix m2: ", diagonal(m2), end='\n')

print("\nMin of matrix m: ", m.min(), end='\n')
print("Min of matrix m1: ", m1.min(), end='\n')
print("Min of matrix m2: ", m2.min(), end='\n')

print("\nMax of matrix m: ", m.max(), end='\n')
print("Max of matrix m1: ", m1.max(), end='\n')
print("Max of matrix m2: ", m2.max(), end='\n')

# Matrix Addition: -->

sum_matrix = m + m1
print("\nSum of matrix m and m1 is: ", end='\n')
print(sum_matrix, end='\n')

# Matrix Subtraction: -->
sub_matrix = m - m1
print("\nSubtraction of matrix m and m1 is: ", end='\n')
print(sub_matrix, end='\n')

# Matrix Division: -->
div_matrix = m // m1
print("\nDivision of matrix m and m1 is: ", end='\n')
print(div_matrix, end='\n')

# Matrix Multiplication: -->
mult_matrix = m * m1
print("\nMultiplication of matrix m and m1 is: ", end='\n')
print(mult_matrix, end='\n')
