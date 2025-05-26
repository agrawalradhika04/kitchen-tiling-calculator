//
//Radhika Agrawal
//CS110 - HW2 titled 'Tiling the Kitchen' - BONUS
//

#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

int main (){

    // Program to compute the number of tiles needed for the kitchen layout when tiles are laid from the center outward in each of the 4 blocks.
    
    cout << "Enter the length of a square tile: ";
    double length_of_tile;
    cin >> length_of_tile;
    assert (length_of_tile > 0);
    
    cout << "Enter the length of the kitchen: ";
    double length_of_kitchen;
    cin >> length_of_kitchen;
    assert (length_of_kitchen > 0);
    
    cout << "Enter the width of the kitchen: ";
    double width_of_kitchen;
    cin >> width_of_kitchen;
    assert (width_of_kitchen > 0);
    
    //Dividing the kitchen area into 4 blocks as depicted in the diagram given in the homework PDF.
    
    cout << endl << "On dividing the kitchen layout into 4 equal blocks, the length of each block is " << length_of_kitchen/2 << " and the width of each block is " << width_of_kitchen/2 << endl;
    
    //Calculating the following data (tiles per row, number of rows, and total tiles required) for just one block.
    
    double tiles_per_row = (length_of_kitchen/2) / length_of_tile;
    cout << endl << "Number of tiles needed for one row in a block: " << ceil(tiles_per_row);
    
    double number_of_rows = (width_of_kitchen/2) / length_of_tile;
    cout << endl << "Number of rows of tiles in a block: " << ceil(number_of_rows);
    
    double total_tiles_required = ceil(tiles_per_row) * ceil(number_of_rows);
    cout << endl << "Total number of tiles required for a block: " << ceil(total_tiles_required) << endl;
    
    //Multiplying the data calculated for one block to get the data for the entire kitchen which we earlier divided into 4 equal blocks.
    
    cout << endl << "Number of tiles needed for one row in the kitchen: " << 2 * ceil(tiles_per_row);
    
    cout << endl << "Number of rows of tiles in the kitchen: " << 2 * ceil(number_of_rows);
    
    cout << endl << "Total number of tiles required for the kitchen: " << 4 * ceil(total_tiles_required);
    
    return 0;
}

