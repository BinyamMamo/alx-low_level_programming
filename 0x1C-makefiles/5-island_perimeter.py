#!/usr/bin/python3

def island_perimeter(grid):
	""" finds the perimeter of an island"""

	perimeter = 0
	if grid is None:
		return 0

	for i in range(len(grid)):
		for j in range(0, len(grid[i])):
			e = lambda a, b: grid[a][b] if grid[a][b] else 0 if grid[a] else 0
			if (e(i, j)):
				perimeter += not e(i + 1, j)
				perimeter += not e(i - 1, j)
				perimeter += not e(i, j + 1)
				perimeter += not e(i, j - 1)

	return perimeter
