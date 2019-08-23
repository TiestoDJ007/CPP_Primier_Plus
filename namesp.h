//
// Created by a on 2019/8/21.
//

#ifndef CPP_PRIMIER_PLUS_NAMESP_H
#define CPP_PRIMIER_PLUS_NAMESP_H

#include <string>

namespace pers {
    struct Person {
        std::string fname;
        std::string lname;
    };

    void getPerson(Person &);

    void showPerson(const Person &);
}
namespace debts {
    using namespace pers;
    struct Debt {
        Person name;
        double amount;
    };

    void getDebt(Debt &);

    void showDebt(const Debt &);

    double sumDebts(const Debt ar[], int n);
}


#endif //CPP_PRIMIER_PLUS_NAMESP_H
