//
// Created by a on 2019/8/22.
//

#ifndef CPP_PRIMIER_PLUS_STOCK10_H
#define CPP_PRIMIER_PLUS_STOCK10_H

class Stock {
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;

    void set_tot() { total_val = shares * share_val; }

public:
    Stock();

    Stock(const std::string &co, long n = 0, double pr = 0.0);

    ~Stock();

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show();
};

#endif //CPP_PRIMIER_PLUS_STOCK10_H
