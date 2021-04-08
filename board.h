//
// Created by 袁玮哲 on 4/8/21.
//

#ifndef CPP_BOARD_H
#define CPP_BOARD_H

class board {
public:
    board() {
        squares = vector<vector<bool>>{9, vector<bool>{9, false}};
    }

    void set(int x, int y) {
        if (x >= 0 && x < 9 && y >= 0 && y < 9)
            squares.at(x).at(y) = true;
    }

    bool get(int x, int y) {
        if (x >= 0 && x < 9 && y >= 0 && y < 9)
            return squares.at(x).at(y);
        else
            return false;
    }

    int compute_points(int x, int y);
    bool is_full();

private:
    vector<vector<bool>> squares;
};

#endif //CPP_BOARD_H
