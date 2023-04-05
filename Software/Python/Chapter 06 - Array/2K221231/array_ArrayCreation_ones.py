# Array

# Using ones() --> The array of ones

# Syntax:
# def ones(shape: int | Iterable[int],
#          dtype: object | None = None,
#          order: str | None = 'C',
#          *,
#          like: Any = None) -> ndarray

from numpy import *

num = int(input("Enter the count: "))

arr = ones(num, int)

print("ones are: ", arr, end='\n')

