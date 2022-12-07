#pragma once

#include <vector>
#include <random>

#include "Card.h"

class DeckOfCards {
public:
    DeckOfCards();

    void shuffle();
    Card dealCard();
    bool moreCards() const;

private:
    const int TOTAL_CARDS = 52;

    std::vector<Card> deck;

    int currentCard;

    std::mt19937 gen;

    int getRandomNumber();
};