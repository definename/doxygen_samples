#include <iostream>
#include "do_something.h"

/**
 * @brief Entry point of the program.
 * @details The very first function that is called
            when the program starts.
 * @param argc Number of command line arguments.
 * @param argv List of command line agruments
 * @return int
 */
int main(int argc, char* argv[]) {
    return do_something(100);
}