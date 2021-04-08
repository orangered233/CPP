//
// Created by Orange on 4/8/21.
//

#ifndef CPP_GAME_H
#define CPP_GAME_H

#include <iostream>
#include "player.h"
#include "board.h"
#include <vector>

using namespace std;

class game {
public:
    game(int player_count) {

        // Setup player names
        int n = 1;
        for (player& p: players) {
            cout << "Player " << n << " what is your name?";
            string n;
            cin >> n;
            p.set_name(n);
        }
        whose_turn = 0;
    }

    int current_player() {
        return whose_turn + 1;
    }

    void end_turn() {
        if (whose_turn == players.size() - 1)
            whose_turn = 0;
        else
            whose_turn++;
    }

    bool game_finished() {
        return b.is_full();
    }

    void get_move();
    int get_winner();

private:
    board b;
    vector<player> players;
    int whose_turn;
};

#endif //CPP_GAME_H
