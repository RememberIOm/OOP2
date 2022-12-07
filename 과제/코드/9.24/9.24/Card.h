#pragma once

#include <string>

class Card {
public:
    Card(int, int);

    std::string toString() const;

private:
    static std::string suits[];
    static std::string faces[];

    int face;
    int suit;
};