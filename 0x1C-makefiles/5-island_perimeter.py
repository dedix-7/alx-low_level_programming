#!/usr/bin/python3
""" a modeule to solve the island problem
"""


def countper(grid, i, j):
    """ A function to ge the perimeter of each square
    """

    count = 0
    if (j - 1 < 0 or grid[i][j - 1] == 0):
        count += 1
    if (j + 1 >= (len(grid[0]) - 1) or grid[i][j + 1] == 0):
        count += 1
    if (i - 1 < 0 or grid[i - 1][j] == 0):
        count += 1
    if (i + 1 >= (len(grid[0]) - 1) or grid[i + 1][j] == 0):
        count += 1
    return (count)


def island_perimeter(grid):
    """
    Calculates the perimeter of the island in a grid.

    Args:
        grid: A list of lists of integers representing the grid.
            0 represents a water zone, 1 represents a land zone.

    Returns:
        The perimeter of the island as an integer.
     """

        for i in range(len(grid)):
            for j in range(len(grid[0])):
                            if (grid[i][j] == 1):
                perimeter += countper(grid, i, j)
    return perimeter
