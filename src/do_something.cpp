#include <iostream>
#include "do_something.h"

bool do_something(const int data) {
    std::cout << "It is " << data << "% done!" << std::endl;
    return true;
}