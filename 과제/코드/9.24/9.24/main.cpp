#include <iostream>

#include "DeckOfCards.h"

int main(int argc, const char* argv[]) {
    DeckOfCards deck1;

    deck1.shuffle();

    while (deck1.moreCards()) {
        std::cout << deck1.dealCard().toString() << std::endl;
    }
    return 0;
}