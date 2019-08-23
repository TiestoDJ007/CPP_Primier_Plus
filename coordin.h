//
// Created by a on 2019/8/19.
//

#ifndef CPP_PRIMIER_PLUS_COORDIN_H
#define CPP_PRIMIER_PLUS_COORDIN_H
struct polar{
    double distance;
    double angle;
};
struct rect{
    double x;
    double y;
};
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);
#endif //CPP_PRIMIER_PLUS_COORDIN_H
