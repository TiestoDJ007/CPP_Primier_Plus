//
// Created by a on 2019/7/29.
//
#include <iostream>

int value = 9;
int *pt = &value;
using namespace std;

int main() {
    cout << "value = " << value << endl;
    cout << "&value = " << &value << endl;
    cout << "pt = " << pt << endl;
    cout << "&pt = " << &pt << endl;
    cout << "*pt = " << *pt << endl;
}
