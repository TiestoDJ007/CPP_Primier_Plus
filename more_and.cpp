//
// Created by jackx on 2019/7/25.
//
#include <iostream>
const char * quality[4]={
        "10,000-meter race.\n",
        "mud tug-of-war.\n",
        "masters canoe jousting.\n",
        "pie-throwing festival.\n"
};
int main(){
    using namespace std;
    int age;
    cout <<"Enter your age in years: ";
    cin >>age;
    int index;
    if (age>17&&age<35)
        index = 0;
    else if (age>=35&&age<50)
        index = 2;
    else
        index=3;
    cout<<"You qualify for the "<<quality[index];
    return 0;
}