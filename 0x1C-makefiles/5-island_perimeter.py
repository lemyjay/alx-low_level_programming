#!/usr/bin/python3
"""
Island Perimeter problem
"""


def island_perimeter(grid):
    """
    A function that returns the perimeter of the island described in grid

    grid (list): grid is a list of list of integers:
                    - 0 represents a water zone
                    - 1 represents a land zone
                    - One cell is a square with side length 1
                    - Grid cells are connected horizontally/veritcally (not
                        diagonally)
                    - Grid is rectangular, width and height don't exceed 100

    Returns:
            - int: The perimeter of the island.

    NOTE: - Grid is completely surrounded by water, and there is
            one island (or nothing).
          - The island doesn't have "lakes" (water inside that isn't connected
            to the water around the island).
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # Starting with the assumption of a full perimeter
                perimeter += 4

                # Check adjacent cells and subtract if land is adjacent
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
