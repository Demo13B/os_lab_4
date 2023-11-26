#include <iostream>
#include "functions.hpp"

auto main() -> int {
    std::cout << "Hello, World!" << std::endl;
    char* c;
    c = translation(14);
    std::cout << c << std::endl;
    return 0;
}