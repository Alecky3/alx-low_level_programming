#!/usr/bin/python3
""" Defines one function island_perimeter that returns the perimiter of the
    island described in grid.
"""


def island_perimeter(grid):
    """ Returns the perimeter of the island as described by grid parameter."""

    if grid is None:
        return 0
    perimiter = 0
    rows = len(grid)

    if rows:
        cols = len(grid[0])

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                if c == 0 or c + 1 == cols:
                    perimiter += 1
                    if c + 1 != cols:
                        if grid[r][c+1] == 0:
                            perimiter += 1
                    if c - 1 != -1:
                        if grid[r][c-1] == 0:
                            perimiter += 1
                else:
                    if grid[r][c+1] == 0:
                        perimiter += 1
                    if grid[r][c-1] == 0:
                        perimiter += 1
                if r == 0 or r + 1 == rows:
                    perimiter += 1
                    if r + 1 != rows:
                        if grid[r+1][c] == 0:
                            perimiter += 1
                    if r - 1 != -1:
                        if grid[r-1][c] == 0:
                            perimiter += 1
                else:
                    if grid[r-1][c] == 0:
                        perimiter += 1
                    if grid[r+1][c] == 0:
                        perimiter += 1

    return perimiter
