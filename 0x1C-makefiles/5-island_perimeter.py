#!/usr/bin/python3
"""Module to calculate the perimeter of an island in a grid."""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid.
    
    :param grid: List of list of integers where 0 represents water and 1 represents land
    :return: The perimeter of the island
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                if i == 0 or grid[i - 1][j] == 0:  # Check Up
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:  # Check Left
                    perimeter += 1
                if i == rows - 1 or grid[i + 1][j] == 0:  # Check Down
                    perimeter += 1
                if j == cols - 1 or grid[i][j + 1] == 0:  # Check Right
                    perimeter += 1

    return perimeter

