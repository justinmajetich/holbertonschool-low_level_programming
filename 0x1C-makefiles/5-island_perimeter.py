#!/usr/bin/python3
"""Defines a function to determine the perimiter of an island"""


def island_perimeter(grid):
    """Determine the perimeter of a grid"""

    size = len(grid)
    perimeter = 0
    row = 1

    while row < size:  # for each row
        for i, val in enumerate(grid[row]):  # checking each unit of row
            if val is 1:  # if index is land
                if grid[row - 1][i] is not 1:  # check above block
                    perimeter = perimeter + 1
                if grid[row][i - 1] is not 1:  # check left block
                    perimeter = perimeter + 1
                if grid[row][i + 1] is not 1:  # check right block
                    perimeter = perimeter + 1
                if grid[row + 1][i] is not 1:  # check below block
                    perimeter = perimeter + 1

        row = row + 1

    return perimeter
