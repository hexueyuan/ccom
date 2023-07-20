#include <iostream>

#include <boost/format.hpp>

int main(int argc, char** argv) {
    std::cout << boost::format("Hello, %s!") % "world" << std::endl;
    return 0;
}