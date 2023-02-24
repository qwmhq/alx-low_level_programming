#!/usr/bin/python3
"""5-island_perimeter"""


def island_perimeter(grid):
    """calculate the perimeter of an island represented by a grid
    Args:
        grid (2d array): a list of lists representing the island and
        the surrounding waters. grid must be rectangular in shape.
    """
    if type(grid) is not list:
        raise TypeError("grid must be a list of lists")

    perimeter = 0
    grid_length = len(grid)
    grid_width = len(grid[0])

    for row in grid:
        if len(row) != grid_width:
            raise ValueError("grid must be rectangular in shape")

    for i in range(grid_length):
        for j in range(grid_width):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if i == grid_length - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if j == grid_width - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
