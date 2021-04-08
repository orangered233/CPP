/*
 * Created by Orange on 4/8/21.
 * pascals_triangle.cpp
 * Print Pascal's triangle
 * */

#include <iostream>
#include "triangle.h"

int main() {
    int rows;

    std::cout << "Pascal's triangle!" << std::endl;
    do {
        std::cout << "Enter how many rows to print (at least 0):";
        std::cin >> rows;
    } while (rows < 0);

    print_pascals_triangle(rows);

    return 0;
}


