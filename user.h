#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>
#include <queue>
#include "product.h"

/**
 * Implements User functionality and information storage
 *  You should not need to derive anything from User at this time
 */
class User {
public:
    User();
    User(std::string name, double balance, int type);
    virtual ~User();

    double getBalance() const;
    std::string getName() const;
    void deductAmount(double amt);
    virtual void dump(std::ostream& os);
    void add(Product* item);
    Product* remove();
    void printCart();
    Product* const cartFront();
    int const cartSize();

private:
    std::string name_;
    double balance_;
    int type_;
    std::queue<Product*> cart_;
};
#endif
