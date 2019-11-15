#!/usr/bin/python3
''' perimeter of an island'''


def island_perimeter(grid):
    p = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if (col == 0 or col == len(grid) or row == 0)\
               and grid[row][col] == 1:
                p = 3
            elif grid[row][col] == 1:
                p = p + 2
            elif row != len(grid) and grid[row][col] == 1\
                 and grid[row + 1][col] == 1:
                p = p - 1
            elif col != len(grid[row])\
                 and row != len(grid) and grid[row][col] == 1\
                 and grid[row + 1][col] == 1 and grid[row][col + 1] == 1:
                p = p - 1
            else:
                pass
    return (p + 2)
