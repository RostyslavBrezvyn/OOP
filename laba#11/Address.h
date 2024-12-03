#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

struct Address {
    std::string street;
    int number;

    Address(const std::string& s = "", int n = 0) : street(s), number(n) {}
};

#endif

