//
// Created by Orange on 4/8/21.
// Print the first rows of Pascal's triangle, left-aligned
//

#include <iostream>
#include <vector>
#include "triangle.h"

using std::vector;

void print_pascals_triangle(int rows) {
    vector<int> row_values;

    for (int row = 0; row < rows; row++) {
        // Update for the next row
        vector<int> new_row = row_values;
        new_row.push_back(1); // Last column is always 1

        // Compute the new row from the current row
        for (int c = 1; c < new_row.size() - 1; c++)
            new_row.at(c) = row_values.at(c - 1) + row_values.at(c);

        // Copy updated row back into the original
        row_values = new_row;

        // Print the updated row
        print_row(row_values);
    }
}

void print_row(vector<int> row_values) {
    for (int value: row_values)
        std::cout << value << " ";
    std::cout << std::endl;
}

