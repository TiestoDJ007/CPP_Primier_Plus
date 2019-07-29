//
// Created by a on 2019/7/29.
//

#include <iostream>

const int ArSize = 8;

int sum_arr(int arr[], int n);

int main() {
    using namespace std;
    int cookies[ArSize] = {1, 2, 4, 8, 16, 64, 32, 128};
    int sum = sum_arr(cookies, ArSize);
    cout << "Total cookies eaten: " << sum << "\n";
    return 0;
}

int sum_arr(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++)
        total = total + arr[i];
    return total;
}