//
// Created by a on 2019/8/23.
//

#ifndef CPP_PRIMIER_PLUS_STACK_H
#define CPP_PRIMIER_PLUS_STACK_H
typedef unsigned long Item;

class Stack {
private:
    enum {
        MAX = 10
    };
    Item items[MAX];
    int top;
public:
    Stack();

    bool isempty() const;

    bool isfull() const;

    bool push(const Item &item);

    bool pop(Item &item);
};

#endif //CPP_PRIMIER_PLUS_STACK_H
