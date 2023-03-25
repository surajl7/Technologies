# Iterators
#
# Creating iterator that returns numbers, string with 1 and each sequence will increase by one

class no:
    def __iter__(self):
        self.a = 1
        return self

    def __next__(self):
        x = self.a
        self.a += 1
        return x


n = no()
n1 = iter(n)
print(next(n1))
print(next(n1))
print(next(n1))
print(next(n1))
