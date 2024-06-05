#!/usr/bin/python3
""" a modeule to solve the island problem
"""


def countper(grid, i, j):
    """ A function to ge the perimeter of each square
    """

    count = 0
    if (j - 1 < 0 or grid[i][j - 1] == 0):
        count += 1
    if (j + 1 >= len(grid[0]) or grid[i][j + 1] == 0):
        count += 1
    if (i - 1 < 0 or grid[i - 1][j] == 0):
        count += 1
    if (i + 1 >= len(grid[0]) or grid[i + 1][j] == 0):
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

    visit = set()

    def defines(i, j):
        """ a depth first function to find the root nodes of te island
        """

        if i >= len(grid) or j >= len(grid[0]) or \
           i < 0 or j < 0 or grid[i][j] == 0:
            return 1
        if (i, j) in visit:
            return (0)

        visit.add((i, j))
        perim = defines(i, j + 1)
        perim += defines(i + 1, j)
        perim += defines(i, j - 1)
        perim += defines(i - 1, j)
        return perim
