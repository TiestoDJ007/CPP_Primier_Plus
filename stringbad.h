//
// Created by a on 2019/8/27.
//

#ifndef CPP_PRIMIER_PLUS_STRINGBAD_H
#define CPP_PRIMIER_PLUS_STRINGBAD_H

#include <iostream>

class StringBad {
private:
    char *str;
    int len;
    static int num_strings;
public:
    StringBad(const char *s);

    StringBad();

    ~StringBad();

    friend std::ostream &operator<<(std::ostream &os, const StringBad &st);
};

#endif //CPP_PRIMIER_PLUS_STRINGBAD_H
