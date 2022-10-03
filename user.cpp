#include "user.h"
using namespace std;

User::User() : name_("unknown"), balance_(0.0), type_(1)
{

}
User::User(std::string name, double balance, int type) :
    name_(name), balance_(balance), type_(type)
{

}

User::~User()
{

}


std::string User::getName() const
{
    return name_;
}

double User::getBalance() const
{
    return balance_;
}

void User::deductAmount(double amt)
{
    balance_ -= amt;
}

void User::dump(std::ostream& os)
{
    os << name_ << " "  << balance_ << " " << type_ << endl;
}

void User::add(Product* item)
{
    cart_.push(item);
}

Product* User::remove()
{
    Product* first;
    if(cart_.size() != 0)
    {
        first = cart_.front();
        cart_.pop();
    }
    else
    {
        first = NULL;
    }


    return first;
}

Product* const User::cartFront()
{
    if(cart_.size() != 0)
    {
        return cart_.front();
    }
    else
    {
        return NULL;
    }
}

int const User::cartSize()
{
    return cart_.size();
}

void User::printCart()
{
    int max = cart_.size();
    for(int i = 0; i < max; i++)
    {
        std::cout << "Item " << i+1 << std::endl;
        std::cout << cart_.front() -> displayString() << std::endl;
        //put in back after print 
        cart_.push(cart_.front());
        cart_.pop();
        std::cout << std::endl;
    }
}