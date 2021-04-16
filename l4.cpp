//
// Created by Orange on 4/14/21.
//

/*
 * Lecture 4: Streams
 * */
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using std::cout;
using std::string;
/*
 * Output Streams
 * Of type std::ostream
 * Can only receive data with the << operator
 *
 * Input Streams
 * Of type std::istream
 * Can only give you data with the >> operator
 * */


int main() {
    cout << 5 << "\n";
    std::ofstream out("out.txt", std::ofstream::out);
    out << 5 << "\n";

    int x, z;
    string y;
    std::cin >> x >> y >> z;

    std::ifstream in("out.txt", std::ifstream::in);
    in >> x >> y >> z;

    // Work with a string as if it were a stream
    string input = "5 seventy 2";
    std::istringstream  i(input);
    i >> x >> y >> z;
    cout << z << "\n";


    return 0;
}

