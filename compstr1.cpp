//
// Created by a on 2019/7/24.
//
#include <iostream>
#include <cstring>

int main() {
    using namespace std;
    char word[5] = "?ate";
    for (char ch = 'a'; strcmp(word, "mate") != 0; ch++) {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    return 0;
}
