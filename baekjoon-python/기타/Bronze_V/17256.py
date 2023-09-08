class Cake:
    def __init__(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z

a, b, c = map(int, input().split())
cake_a = Cake(a, b, c)

a, b, c = map(int, input().split())
cake_c = Cake(a, b, c)

print(cake_c.x - cake_a.z, cake_c.y // cake_a.y, cake_c.z - cake_a.x)