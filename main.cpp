#include <iostream>
#include "./keywords/keywords.hpp"
#include "./cpp-classes/array.hpp"
using namespace Keywords;

int main() {
    Array arr = Array<char*>();

    arr.Add((char*)"Hello");

    std::cout << arr.Get(0) << "\n";
    return 0;
}
