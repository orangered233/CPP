//
// Created by Orange on 4/8/21.
//

#include <iostream>
#include "game.h"
using namespace std;

void game::get_move() {
    int x, y;
    do {
        cout << "Player " << current_player() <<
        ": what is your move (x, y)?";

        cin >> x >> y;
    } while (x < 0 || x >= 9 || y < 0 || y >= 9);

    b.set(x, y);
    int points = g.get_points(x, y);
    players.at(whose_turn).add_points(points);
}

int game::get_winner() {
    int winner = 0;
    int high_score = players.at(0).get_score();
    for (int i = 1; i < players.size(); i++) {
        if (players.at(i).get_score() > high_score) {
            winner = i;
            high_score = players.at(i).get_score();
        }
    }
    return winner + 1;
}