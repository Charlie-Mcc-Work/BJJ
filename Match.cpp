#include "Match.h"
#include <iostream>

Match::Match()
{
    points1 = 0;
    points2 = 0;
    time = 0;
    winner = 0;
}

Match::Match(Player& player1, Player& player2, int max_time)
{
    Match();
    p1 = player1;
    p1.setStartStatuses();
    p2 = player2;
    p2.setStartStatuses();
    time = max_time;
}

Player& Match::getP1() {
    return p1;
}

int Match::getPoints1() {
    return points1;
}

Player& Match::getP2() {
    return p2;
}

int Match::getPoints2() {
    return points2;
}

Player& Match::getWinner() {
    // Potential error, only call if game is over.
    if (winner == 1) {
        return getP1();
    } else {
        return getP2();
    }
}

void Match::begin() {
}

// True means continue
bool Match::nextTurn() {

    return (winner == 0);
}

