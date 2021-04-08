//
// Created by Orange on 4/8/21.
//

#ifndef CPP_PLAYER_H
#define CPP_PLAYER_H

using std::string;
class player {
public:
    player(string n) {
        name = n;
        score += 0;
    }

    void set_name(string n) {
        name = n;
    }

    void add_points(int p) {
        score += p;
    }

    int get_score() {
        return score;
    }

private:
    string name;
    int score;
};
#endif //CPP_PLAYER_H
