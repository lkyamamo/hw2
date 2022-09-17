#include <sstream>
#include <iomanip>
#include "book.h"

Book::Book(const std::string category, const std::string name, double price, int qty, const std::string isbn, const std::string author) :
    Product(category, name, price, qty),
    isbn_(isbn),
    author_(author)
{

}

std::set<std::string> Book::keywords() const
{
    std::set<std::string> output;
    output.insert(name_);
    output.insert(category_);
    output.insert(isbn_);
    output.insert(author_);

    return output;
}

std::string Book::displayString() const
{
    std::string output = "";

    //first line
    output += name_;
    output += '\n';

    //second line
    output += "Author: ";
    output += author_;
    output += " ISBN: ";
    output += isbn_;
    output += '\n';

    //third line
    output += std::to_string(price_);
    output += " ";
    output += std::to_string(qty_);
    output += " left.\n";

    return output;
}

void Book::dump(std::ostream& os) const
{
    os << "book" << std::endl;
    os << name_ << std::endl;
    os << price_ << std::endl;
    os << qty_ << std::endl;
    os << isbn_ << std::endl;
    os << author_ << std::endl;
}