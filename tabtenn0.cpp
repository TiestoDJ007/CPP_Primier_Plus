//
// Created by a on 2019/9/4.
//
#include <iostream>
#include "tabtenn0.h"

TableTennisPlayer::TableTennisPlayer(const string &fn, const string &ln, bool ht) : firstname(fn), lastname(ln),
                                                                                    hasTable(ht) {}

void TableTennisPlayer::Name() const {
    std::cout << lastname << ", " << firstname;
}
