#include <sstream>
#include <iomanip>
#include "book.h"
#include "util.h"

Book::Book(const std::string category, const std::string name, double price, int qty, const std::string isbn, const std::string author) :
    Product(category, name, price, qty),
    isbn_(isbn),
    author_(author)
{

}

std::set<std::string> Book::keywords() const
{
    std::set<std::string> output;
    std::set<std::string> tempSet;
    std::string tempString;
    output.insert(category_);
    output.insert(isbn_);

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
    
    //author parse
    tempString = convToLower(author_);
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

std::string Book::displayString() const
{
    std::string output = "";

    //print all data members
    output += name_;
    output += '\n';
    output += "Author: ";
    output += author_;
    output += "\n";
    output += "ISBN: ";
    output += isbn_;
    output += '\n';
    output += std::to_string(price_);
    output += "\n";
    output += std::to_string(qty_);
    output += " left.\n";

    return output;
}

void Book::dump(std::ostream& os) const
{
    //add all data members
    os << category_ << std::endl;
    os << name_ << std::endl;
    os << price_ << std::endl;
    os << qty_ << std::endl;
    os << isbn_ << std::endl;
    os << author_ << std::endl;
}