#include <iostream>
#include "do_something.h"

/**
 * @brief Entry point of the program.
 * @details The very first function that is called
            when the program starts.
 * @param[in] argc Number of command line arguments.
 * @param[in] argv List of command line agruments
 * @return int, main program exit code
 */
int main(int argc, char* argv[]) {
    return do_something(100);
}