//
// Created by Orange on 4/6/21.
//

/**
 * Lecture 3: Initialization and References
 */

#include <string>
#include <iostream>
using std::pair;
using std::string;

struct Student {
    string name;
    string state;
    int age;
};

int main(int argc, char** argv) {
    // Uniform initialization provides a way for us to use brackets to initializa
    // anything succinctly.
    pair<bool, int> some_pair{false, 6};
    Student s{"Ethan", "PA", 20};
    std::cout << some_pair.first << " " << some_pair.second << std::endl;
    return 0;
}