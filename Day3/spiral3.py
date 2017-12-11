from math import ceil, sqrt


def generate_spiral_grid(value):
    # determine the board size needed
    size = ceil(sqrt(value))
    return size
# the grid size is 571 x 571
print(generate_spiral_grid(325489))

print(571**2)


def spiral(X, Y):
    x = y = 0
    dx = 0
    dy = -1
    z = 0
    for i in range(max(X, Y)**2):

        if (-X/2 < x <= X/2) and (-Y/2 < y <= Y/2):
            print(x, y)
        if z == 325489:
            print(x, y, z)
        if x == y or ( x < 0 and x == -y) or (x > 0 and x == 1-y):
            dx, dy = -dy, dx
        x, y = x + dx, y + dy
        z += 1


print(spiral(571, 571))