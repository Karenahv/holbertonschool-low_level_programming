#!/usr/bin/python3
''' perimeter of an island'''


def island_perimeter(grid):
    p = 0
    count = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] == 1:
                count = count + 1
    p = count * 2
    return (p + 2)
