#include <sstream>
#include <iomanip>
#include "clothing.h"
#include "util.h"

Clothing::Clothing(const std::string category, const std::string name, double price, int qty, const std::string size, const std::string brand) :
    Product(category, name, price, qty),
    size_(size),
    brand_(brand)
{

}

std::set<std::string> Clothing::keywords() const
{
    std::set<std::string> tempSet;
    std::string tempString;
    std::set<std::string> output;
    output.insert(category_);
    output.insert(convToLower(size_));

    //name parse
    tempString = convToLower(name_);
    //into individual word set
    tempSet = parseStringToWords(tempString);
    std::set<std::string>::iterator it = tempSet.begin();
    while(it != tempSet.end())
    {
        output.insert(*it);
        ++it;
    }
    tempSet.clear();

    //brand parse
    tempString = convToLower(brand_);
    //into individual word set
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

std::string Clothing::displayString() const
{
    std::string output = "";

    //print all data members
    output += name_;
    output += '\n';
    output += "Size: ";
    output += size_;
    output += "\n";
    output += "Brand: ";
    output += brand_;
    output += '\n';
    output += std::to_string(price_);
    output += " ";
    output += std::to_string(qty_);
    output += " left.\n";

    return output;
}

void Clothing::dump(std::ostream& os) const
{
    //add all data members
    os << category_ << std::endl;
    os << name_ << std::endl;
    os << price_ << std::endl;
    os << qty_ << std::endl;
    os << size_ << std::endl;
    os << brand_ << std::endl;
}