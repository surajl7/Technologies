# Iteration
#
# Stop Iteration

class myno:
    def __iter__(self):
        self.a = 1
        return self

    def __next__(self):
        if self.a <= 20:
            x = self.a
            self.a += 1
            return x
        else:
            raise StopIteration


m1 = myno()             # object creation
m2 = iter(m1)

for x in m2:
    print(x)
