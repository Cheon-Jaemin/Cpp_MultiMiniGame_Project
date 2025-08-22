#pragma once
#include <vector>
#include "Card.h"

class Player
{
	vector<Card> handCard;

public : 
	void addCard(Card c);
	int getScore() const;
	void showHand(bool hide = false) const;
	bool isBust() const;
	void clearHand();
};

