//
// Created by a on 2019/6/11.
//

#include <iostream>

float F_temp(float);

int main() {
    using namespace std;
    float C_temp;
    cout << "Please enter a Celsius value: ";
    cin >> C_temp;
    float Fahrenheit = F_temp(C_temp);
    cout << C_temp << " degrees Celsius is " << Fahrenheit << " degrees Fahrenheit." << endl;
    return 0;
}

float F_temp(float C_temp) {
    return 1.8 * C_temp + 32.0;
}
