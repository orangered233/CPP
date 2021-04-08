//
// Created by Orange on 4/8/21.
//

#include "board.h"

int board::compute_points(int x, int y) {

}

bool board::is_full() {
    for (int y = 0; y < 9; y++)
        for (int x = 0; x < 9; x++)
            if (!squares.at(x).at(y))
                return false;
    return true;
}

