#!/usr/bin/python3
"""
Module to create a function
"""

def island_perimeter(grid):
    """
    Function that return the iland perimetrer
    """
    p = 2
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                if grid[j][i+1] == 1:
                    p += 1
                else:
                    p += 2
    return (p)
