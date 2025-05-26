# kitchen-tiling-calculator
This project calculates the number of square tiles required to cover a rectangular kitchen floor. The user provides the size of a single square tile along with the kitchen’s length and width. The program ensures that enough full tiles are used by applying the ceil function to round up any fractional tile requirements. Input validation is handled using assertions to make sure all values entered are positive.

The repository contains two C++ programs, each representing a different tiling strategy:

tile-from-corner.cpp : Computes the number of tiles needed when laying them out from a corner of the kitchen in a traditional row-by-row fashion. It calculates the number of tiles per row and the number of rows required, then multiplies these values to determine the total number of tiles. The output includes a breakdown of tiles needed in each direction as well as the total tile count.

tile-from-center.cpp : Implements a center-outward tiling approach, where the kitchen is conceptually divided into four equal blocks. It first calculates the number of tiles needed for a single block and then multiplies by four to determine the total for the entire space. This method helps in achieving visual balance, especially when the tile layout needs to be symmetrical from the center.
