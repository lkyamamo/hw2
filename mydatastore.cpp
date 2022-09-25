#include "mydatastore.h"
#include "util.h"

void MyDataStore::addProduct(Product* p)
{
    mProducts.push_back(p);
}

void MyDataStore::addUser(User* u)
{
    mUsers.push_back(u);
}

std::vector<Product*> MyDataStore::search(std::vector<std::string>& terms, int type)
{
    std::vector<Product*> output;
    std::set<std::string> temp;
    std::set<std::string> searchTerms;
    int type;


    if(terms[0] == "AND")
    {
        type = 0;
    }
    else if(terms[0] == "OR")
    {
        type = 1;
    }
    //throw exception
    else
    {
        throw 
    }

    //adds initial search terms to set
    terms.erase(terms.begin());
    while(terms.size() != 0)
    {
        searchTerms.insert((terms.back()));
        terms.pop_back();
    }



    //AND implementation
    if(type == 0)
    {
        std::vector<Product*>::iterator it;
        for(it = mProducts.begin(); it != mProducts.end(); it++)
        {
            temp = setIntersection(searchTerms, (*it)->keywords());
            if(temp.size() == searchTerms.size())
            {
                output.push_back(*it);
            }
        }

    }
    //Or implementation
    else 
    {
        std::vector<Product*>::iterator it;
        for(it = mProducts.begin(); it != mProducts.end(); it++)
        {
            temp = setIntersection(searchTerms, (*it)->keywords());
            if(temp.size() != 0)
            {
                output.push_back(*it);
            }
        }
    }
    
    return output;
}

void MyDataStore::dump(std::ostream& ofile)
{
    std::cout << "<products>" << std::endl;
    for(int i = 0; i < mProducts.size(); i++)
    {
        mProducts[i] -> dump(ofile);
    }
    std::cout << "</products>" << std::endl;

    std::cout <<"<users>" << std::endl;
    for(int i = 0; i < mUsers.size(); i++)
    {
        mUsers[i] -> dump(ofile);
    }
}