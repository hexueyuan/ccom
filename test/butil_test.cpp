#include <iostream>

#include "butil/version.h"

int main(int argc, char** argv) {
    butil::Version v1("1.0.0");

    std::cout << v1.GetString() << std::endl;
    return 0;
}