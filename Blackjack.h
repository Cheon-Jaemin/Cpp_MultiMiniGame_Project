#pragma once
#include "Deck.h"
#include "Player.h"

class Blackjack
{
	Deck deck;
	Player COM;
	Player player;

public:
	bool playGame();
};