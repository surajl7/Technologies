# Object-oriented programming
#
# Polymorphism

# Areas:
#     Area of triangle = 0.5*base*height
#     Area of rectangle = length*breadth
#     Area of square = sqr(side)

# Ex: Calculating areas of different objects


class area:
    @staticmethod
    def sides(side1=None, side2=None, side3=None):
        # obj_area = 0

        if side1 is not None and side2 is not None and side3 is not None:
            obj_area = side1 * side2 * side3
        elif side1 is not None and side2 is not None:
            obj_area = side1 * side2
        else:
            obj_area = pow(side1, 2)

        return obj_area


obj1 = area()
print("Area of square: ", obj1.sides(10))
print("Area of rectangle: ", obj1.sides(20, 30))
print("Area of triangle: ", obj1.sides(0.5, 50, 60))
