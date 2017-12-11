class Grid:
    def __init__(self, n):
        self.n = n
        self.size = pow(n, 2)
        self.filled_in = set()
        self.next = 1

        self.grid = []
        for i in range(n):
            self.grid.append(['0'] * n)

    def __str__(self):
        return '\n'.join(' '.join(row) for row in self.grid) + '\n'

    def spiral(self):
        # fill in first position
        first_position = (0, 0)
        self.fill_in(first_position)

        # now fill in the rest
        previous_position = first_position
        previous_direction = 0

        while len(self.filled_in) < self.size:
            direction_deltas = [(1, 0), (0, 1), (-1, 0), (0, -1)]
            num_directions = len(direction_deltas)

            for i in range(num_directions):
                next_direction = (previous_direction + i) % num_directions
                direction_delta = direction_deltas[next_direction]
                position = self.next_position(previous_position, direction_delta)
                previous_direction = next_direction
                if self.position_is_ok(position):
                    self.fill_in(position)
                    previous_position = position
                    break

    def position_is_ok(self, position):
        if position in self.filled_in:
            return False
        if not all(coord in range(self.n) for coord in position):
            return False
        return True

    def next_position(self, previous_position, direction_delta):
        return tuple(map(sum, zip(previous_position, direction_delta)))

    def fill_in(self, position):
        x, y = position
        self.filled_in.add(position)
        self.grid[y][x] = str(self.next)
        self.next += 1

        print(self)

if __name__ == '__main__':
    grid = Grid(5)
    print(grid)
    grid.spiral()