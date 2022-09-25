#include <sstream>
#include <iomanip>
#include "movie.h"

Movie::Movie(const std::string category, const std::string name, double price, int qty, const std::string genre, const std::string rating) :
    Product(category, name, price, qty),
    genre_(genre),
    rating_(rating)
{

}

std::set<std::string> Movie::keywords() const
{
    std::set<std::string> output;
    output.insert(name_);
    output.insert(category_);
    output.insert(genre_);
    output.insert(rating_);

    return output;
}

std::string Movie::displayString() const
{
    std::string output = "";

    //first line
    output += name_;
    output += '\n';

    //second line
    output += "Genre: ";
    output += genre_;
    output += " Rating: ";
    output += rating_;
    output += '\n';

    //third line
    output += std::to_string(price_);
    output += " ";
    output += std::to_string(qty_);
    output += " left.\n";

    return output;
}

void Movie::dump(std::ostream& os) const
{
    os << category_ << std::endl;
    os << name_ << std::endl;
    os << price_ << std::endl;
    os << qty_ << std::endl;
    os << genre_ << std::endl;
    os << rating_ << std::endl;
}