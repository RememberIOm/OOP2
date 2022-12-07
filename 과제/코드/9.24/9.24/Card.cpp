#include <string>

#include "Card.h"

std::string Card::suits[5] = { "", "clubs", "diamonds", "hearts", "spades" };
std::string Card::faces[14] = { "",     "ace",  "two",   "three", "four",
                               "five", "six",  "seven", "eight", "nine",
                               "ten",  "jack", "queen", "king" };

Card::Card(int f, int s) {
    face = f;
    suit = s;
}

std::string Card::toString() const {
    return faces[face] + " of " + suits[suit];
}