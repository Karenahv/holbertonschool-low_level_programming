#!/usr/bin/python3
"""module to find island perimeter"""


def island_perimeter(grid):
    """returns the perimeter of island described in grid"""
    p = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                if row - 1 < 0:
                    p += 1
                else:
                    try:
                        if grid[row - 1][col] == 0 or row - 1 < 0:
                            p += 1
                    except:
                        pass
                if row + 1 > len(grid) - 1:
                    p += 1
                else:
                    try:
                        if grid[row + 1][col] == 0:
                            p += 1
                    except:
                        pass
                if col + 1 > len(grid[row]) - 1:
                    p += 1
                else:
                    try:
                        if grid[row][col + 1] == 0:
                            p += 1
                    except:
                        pass
                try:
                    if grid[row][col - 1] == 0 or col - 1 < 0:
                        p += 1
                except:
                    pass
    return (p)
