#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

int main (){

    // Program to compute the number of tiles needed for the kitchen.
    
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
	
	double tiles_per_row = length_of_kitchen/length_of_tile;
	cout << endl << "Number of tiles needed for one row: " << ceil(tiles_per_row);
	
	double number_of_rows = width_of_kitchen/length_of_tile;
	cout << endl << "Number of rows of tiles in the kitchen: " << ceil(number_of_rows);
	
	double total_tiles_required = ceil(tiles_per_row) * ceil(number_of_rows);
	cout << endl << "Total number of tiles required for the kitchen: " << ceil(total_tiles_required);
	
	return 0;
}
