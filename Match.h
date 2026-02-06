#ifndef MATCH_H
#define MATCH_H

#include <string>
#include "Player.h"

class Match
{
public:

    Player& p1;
    int points1;
    Player& p2;
    int winner;
    int points2;
    int time;

    // Constructor
    Match();
    Match(Player& player1, Player& player2, int max_time);

    // Methods
    Player& getP1();
    int getPoints1();
    Player& getP2();
    int getPoints2();
    Player& getWinner();
    void begin();
    bool nextTurn();

};

#endif
