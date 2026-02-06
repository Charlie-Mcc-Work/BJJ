#include "Match.h"
#include "Player.h"
#include <iostream>

int main() {
    Player player1 = Player("Adam");
    player1.setStat("strength", player1.getPoints());

    Player player2 = Player("Bob");
    player1.setSkill("triangle", player2.getPoints());

    int match_time = 100;

    Match startMatch = Match(player1, player2, match_time); // Am I doing & right?

    startMatch.begin();

    while (startMatch.nextTurn()) {
        std::cout << "P1: " << startMatch.getPoints1() << " and P2: " << startMatch.getPoints2() << std::endl;
    }

    std::cout << "Winner: " << startMatch.getWinner().getName() << std::endl;


    return 0;
}
