//
// Created by Orange on 4/8/21.
//

/*
 * Structuring Large Projects
 * */

#include <iostream>
#include "game.h"
using namespace std;

int main() {
    game g{2}; // Start two players

    while (!g.is_finished()) {
        g.get_move();
        g.end_turn();
    }

    cout << "Player " << g.get_winner() << " you're the winner!" << endl;
    return 0;
}
