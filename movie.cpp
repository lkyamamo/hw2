#include <sstream>
#include <iomanip>
#include "movie.h"
#include "util.h"

Movie::Movie(const std::string category, const std::string name, double price, int qty, const std::string genre, const std::string rating) :
    Product(category, name, price, qty),
    genre_(genre),
    rating_(rating)
{

}

std::set<std::string> Movie::keywords() const
{
    std::set<std::string> tempSet;
    std::string tempString;
    std::set<std::string> output;
    output.insert(category_);
    output.insert(convToLower(rating_));
    
    //name parse
    tempString = convToLower(name_);
    //to individual words
    tempSet = parseStringToWords(tempString);
    std::set<std::string>::iterator it = tempSet.begin();
    while(it != tempSet.end())
    {
        output.insert(*it);
        ++it;
    }
    tempSet.clear();

    //genre parse
    tempString = convToLower(genre_);
    //to individual words
    tempSet = parseStringToWords(tempString);
    it = tempSet.begin();
    while(it != tempSet.end())
    {
        output.insert(*it);
        ++it;
    }
    tempSet.clear();

    return output;
}

std::string Movie::displayString() const
{
    std::string output = "";

    //print all data members
    output += name_;
    output += '\n';
    output += "Genre: ";
    output += genre_;
    output += "\n";
    output += "Rating: ";
    output += rating_;
    output += '\n';
    output += std::to_string(price_);
    output += "\n";
    output += std::to_string(qty_);
    output += " left.\n";

    return output;
}

void Movie::dump(std::ostream& os) const
{
    //add all data members
    os << category_ << std::endl;
    os << name_ << std::endl;
    os << price_ << std::endl;
    os << qty_ << std::endl;
    os << genre_ << std::endl;
    os << rating_ << std::endl;
}