//
// Created by a on 2019/7/30.
//
#include <iostream>

void countdown(int n);

int main() {
    countdown(4);
    return 0;
}

void countdown(int n) {
    using namespace std;
    cout << "Couting down ... " << n << "(n at " << &n << ")" << endl;
    if (n > 0)
        countdown(n - 1);
    cout << n << ": Kaboom!" << "        (n at " << &n << ")" << endl;
}