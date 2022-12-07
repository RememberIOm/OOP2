#include <algorithm>
#include <stdexcept>
#include <random>

#include "DeckOfCards.h"

DeckOfCards::DeckOfCards() : currentCard(0), gen(std::random_device()()) {
    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= 13; ++j) {
            deck.push_back(Card(j, i));
        }
    }
}

void DeckOfCards::shuffle() {
    for (int i = 0, r1 = 0, r2 = 0; i < TOTAL_CARDS; ++i) {
        r1 = getRandomNumber();
        r2 = getRandomNumber();

        std::iter_swap(deck.begin() + r1, deck.begin() + r2);
    }
}

Card DeckOfCards::dealCard() {
    if (moreCards()) {
        return deck[currentCard++];
    }
    else {
        throw std::invalid_argument("end of deck reached");
    }
}

bool DeckOfCards::moreCards() const { return currentCard < TOTAL_CARDS; }


int DeckOfCards::getRandomNumber() {
    return std::uniform_int_distribution<int>{1, TOTAL_CARDS - 1}(gen);
}