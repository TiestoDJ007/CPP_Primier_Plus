//
// Created by a on 2019/8/26.
//

#ifndef CPP_PRIMIER_PLUS_STONEWT_H
#define CPP_PRIMIER_PLUS_STONEWT_H

class Stonewt {
private:
    enum {
        Lbs_per_stn = 14
    };
    int stone;
    double pds_left;
    double pounds;
public:
    Stonewt(double lbs);

    Stonewt(int stn, double lbs);

    Stonewt();

    ~Stonewt();

    void show_lbs() const;

    void show_stn() const;
};

#endif //CPP_PRIMIER_PLUS_STONEWT_H
