#include <sstream>
#include <iomanip>
#include "clothing.h"

Clothing::Clothing(const std::string category, const std::string name, double price, int qty, const std::string size, const std::string brand) :
    Product(category, name, price, qty),
    size_(size),
    brand_(brand)
{

}

std::set<std::string> Clothing::keywords() const
{
    std::set<std::string> output;
    output.insert(name_);
    output.insert(category_);
    output.insert(size_);
    output.insert(brand_);

    return output;
}

std::string Clothing::displayString() const
{
    std::string output = "";

    //first line
    output += name_;
    output += '\n';

    //second line
    output += "Size: ";
    output += size_;
    output += " Brand: ";
    output += brand_;
    output += '\n';

    //third line
    output += std::to_string(price_);
    output += " ";
    output += std::to_string(qty_);
    output += " left.\n";

    return output;
}

void Clothing::dump(std::ostream& os) const
{
    os << "book" << std::endl;
    os << name_ << std::endl;
    os << price_ << std::endl;
    os << qty_ << std::endl;
    os << size_ << std::endl;
    os << brand_ << std::endl;
}