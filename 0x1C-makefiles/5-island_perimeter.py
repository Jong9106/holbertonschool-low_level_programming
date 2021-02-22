#!/usr/bin/python3
"""
Module to create a function
"""


def island_perimeter(grid):
    """
    Function that return the iland perimetrer
    """
    row = len(grid)
    columns = len(grid[0])
    p = 0
    for i in range(row):
        for j in range(columns):
            if grid[i][j] == 0:
                continue
            if i == 0 or grid[i - 1][j] == 0:
                p += 1
            if i == row - 1 or grid[i + 1][j] == 0:
                p += 1
            if j == 0 or grid[i][j - 1] == 0:
                p += 1
            if j == columns - 1 or grid[i][j + 1] == 0:
                p += 1
    return p
