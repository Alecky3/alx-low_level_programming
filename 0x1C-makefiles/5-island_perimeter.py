#!/usr/bin/python3
""" defines function island_perimiter that returns the perimiter
    of island.
"""


def island_perimeter(grid):
    rows = len(grid)
    perimiter = 0

    if grid != []:
        cols = len(grid[0])

    for r in range(rows):
        for c in range(cols):
            if c == 0:
                perimiter += 1
                if r == 0:
                    perimiter += 1
                    if c+1 < cols:
                        if not grid[r][c + 1]:
                            perimiter += 1
                        if not grid[r+1][c]:
                            perimiter += 1
                if r+1 == rows:
                    perimiter += 1
                    if c+1 < cols:
                        if not grid[r][c+1]:
                            perimiter += 1
                        if not grid[r-1][c]:
                            perimiter += 1
            if c+1 == cols:
                perimiter += 1
                if r == 0 and c-1 != -1:
                    perimiter += 1
                    if not grid[r][c-1]:
                        perimiter += 1
                    if not grid[r+1][c]:
                        perimiter += 1
                if r+1 == rows and c-1 != -1:
                    perimiter += 1
                    if not grid[r][c-1]:
                        perimiter += 1
                    if not grid[r-1][c]:
                        perimiter += 1

            if c != 0 and c+1 != cols:
                if r == 0:
                    perimiter += 1
                    if not grid[r][c-1]:
                        perimiter += 1
                    if not grid[r][c+1]:
                        perimiter += 1
                    if r+1 != rows and not grid[r+1][c]:
                        perimiter += 1
                if r+1 == rows:
                    perimiter += 1
                    if not grid[r][c-1]:
                        perimiter += 1
                    if not grid[r][c+1]:
                        perimiter += 1
                    if r-1 != -1 and not grid[r][c]:
                        perimiter += 1

                if not r and r+1 != rows:
                    if not c-1 and not grid[r][c-1]:
                        perimiter += 1
                    if c+1 != cols and not grid[r][c+1]:
                        perimiter += 1
                    if not grid[r-1][c]:
                        perimiter += 1
                    if not grid[r+1][c]:
                        perimiter += 1


    return perimiter
