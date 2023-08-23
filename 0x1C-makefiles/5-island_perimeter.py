#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
    grid (list[list[int]]): The grid representing the island.

    Returns:
    int: The perimeter of the island.
    """
    rows = len(grid)
    if rows == 0:
        return 0
    
    cols = len(grid[0])
    perimeter = 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4  # Start with 4 sides

                # Check adjacent cells
                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2  # Subtract 2 for overlapping side
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2  # Subtract 2 for overlapping side

    return perimeter

# Example usage
grid = [
    [0, 1, 0, 0],
    [1, 1, 1, 0],
    [0, 1, 0, 0],
    [1, 1, 0, 0]
]
perimeter = island_perimeter(grid)
print("Perimeter:", perimeter)

