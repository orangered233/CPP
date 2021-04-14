//
// Created by Orange on 4/6/21.
//

/**
 * Lecture 3: Initialization and References
 */

#include <string>
#include <iostream>
#include <vector>
using std::pair;
using std::string;
using std::cout;

struct Student {
    string name;
    string state;
    int age;
};

struct Time {
    int hour, minute;
};

struct Course {
    string code;
    pair<Time, Time> time;
    std::vector<string> instructors;
};

void print_vec(std::vector<int> v) {
    for (int i : v)
        cout << i << " ";
    cout << "\n";
}

/* We can return references as well */
int& front(std::vector<int>& vec) {
    // assuming vec.size() > 0
    return vec[0];
}


int main(int argc, char** argv) {
    // Uniform initialization provides a way for us to use brackets to initializa
    // anything succinctly.
    int n = 3;
    int k = 5;

    std::vector<int> v{3, 5};

    for (int i: v)
        cout << i << " ";

    Course now{"CS106L", {{16, 30}, {17, 50}}, {"Raghuraman", "Chi"}};

    for (string name: now.instructors)
        cout << name << " ";
    cout << std::endl << "\n";

    std::vector<int> original{1, 2};
    std::vector<int> copy = original; // A copy of original. Pass by value.
    std::vector<int>& ref = original; // same address as the original. Pass by reference.
    copy.push_back(3);
    ref.push_back(7);
    print_vec(original);
    print_vec(copy);

    // Need to explicitly specify const and & with auto!
    std::vector<int> vec{1, 2, 3, 5};
    auto& v_ref = vec;
    vec.push_back(999);
    cout << "v_ref" << std::endl;
    print_vec(v_ref);

    cout << std::endl;
    pair<bool, int> some_pair{false, 6};
    Student s{"Ethan", "PA", 20};
    cout << some_pair.first << " " << some_pair.second << std::endl;

    std::vector<int> numbers{1, 2, 3};
    front(numbers) = 4;
    cout << "numbers\n";
    print_vec(numbers);


    return 0;
}