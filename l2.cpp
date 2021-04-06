//
// Created by Orange on 4/5/21.
// Lecture 2 -- Struct
//
#include <string>
#include <iostream>
#include <math.h>

using std::string;
using std::pair;
using std::make_pair;
// A struct is a group of named variables with their own type
struct Student {
    string name;
    string state;
    int age;
};

void printStudentInfo(Student student) {
    std::cout << student.name << " from " << student.state;
    std::cout << " (" << student.age << ")" << std::endl;
}

pair<bool, pair<double, double>> quadratic(int a, int b, int c) {
    double inside = b * b - 4 * a * c;
    pair<double, double> blank;
    if (inside < 0)
        return make_pair(false, blank);
    pair<double, double> answer = make_pair((-b + sqrt(inside))/(2*a),
                                            (-b - sqrt(inside))/(2*a));
    return make_pair(true, answer);
}

int main(int argc, char** argv) {
    Student student = {"Ethan", "PA", 20};
    // A pair is a struct with two fields
    // Common use case: return success + result
    std::pair<bool, Student> query_result;
    query_result.first = true;
    query_result.second = student;

    // A quadratic function example
    int a, b, c;
    std::cin >> a >> b >> c;
    pair<bool, pair<double, double>> result = quadratic(a, b, c);
    if (result.first) {
        pair<double, double> solutions = result.second;
        std::cout << solutions.first << solutions.second << std::endl;
    } else
        std::cout << "No solutions found!" << std::endl;

    // Type Deduction with auto
    auto v = 3;
    auto d = "Hello";

    // When should we use auto?
    auto result2 = quadratic(a, b, c);
    if (result2.first) {
        auto solutions2 = result.second;
    }

    // Structured binding lets you initialize directly from the contents of a struct
    // Before
    auto p = make_pair("s", 5);
    string a1 = p.first;
    int b1 = p.second;
    // After
    auto [a2, b2] = p;

    // Apply structured binding
    auto [found, solutions] = quadratic(a, b, c);
    if (found) {
        auto [x1, x2] = solutions;
        std::cout << x1 << " " << x2 << std::endl;
    } else {
        std::cout << "No solutions found!" << std::endl;
    }


}

