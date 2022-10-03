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

    //adds initial search terms to set
    while(terms.size() != 0)
    {
        searchTerms.insert((terms.back()));
        terms.pop_back();
    }

    //AND implementation
    if(type == 0)
    {
        std::vector<Product*>::iterator it;
        //go through all producrts in database
        for(it = mProducts.begin(); it != mProducts.end(); it++)
        {
            std::set<std::string> pKeywords = (*it)->keywords();
            //get the intersection set of product keywords and search terms
            temp = setIntersection(searchTerms, pKeywords);
            //if the product has all the search terms then add it to the list
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
            std::set<std::string> pKeywords = (*it)->keywords();
            temp = setIntersection(searchTerms, pKeywords);
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
    //go through products and dump each product
    std::cout << "<products>" << std::endl;
    for(unsigned long i = 0; i < mProducts.size(); i++)
    {
        mProducts[i] -> dump(ofile);
    }
    std::cout << "</products>" << std::endl;

    //go through each user and dump
    std::cout <<"<users>" << std::endl;
    for(unsigned long i = 0; i < mUsers.size(); i++)
    {
        mUsers[i] -> dump(ofile);
    }
}

void MyDataStore::addToCart(std::string user, Product* item)
{
    std::vector<User*>::iterator it = mUsers.begin();
    while(it != mUsers.end())
    {
        if((*it) -> getName() == user)
        {
            break;
        }
        ++it;
    }

    if(it != mUsers.end())
    {
        (*it) -> add(item);
    }
    else
    {
        std::cout << "Invalid Request" << std::endl;
    }
}

void const MyDataStore::viewCart(std::string user)
{
    std::vector<User*>::iterator it = mUsers.begin();
    while(it != mUsers.end())
    {
        if((*it) -> getName() == user)
        {
            break;
        }
        ++it;
    }

    if(it != mUsers.end())
    {
        (*it) -> printCart();
    }
    else
    {
        std::cout << "Invalid Username" << std::endl;
    }
}

void MyDataStore::buyCart(std::string user)
{
    std::vector<User*>::iterator it = mUsers.begin();
    while(it != mUsers.end())
    {
        if((*it) -> getName() == user)
        {
            break;
        }
        ++it;
    }

    if(it != mUsers.end())
    {
        User* curUser = (*it);
        int i = 0;
        int max = curUser -> cartSize();
        while (i < max)
        {
            Product* current = curUser -> cartFront();
            //if have enough funds and have enough quantity 
            if(curUser -> getBalance() > current -> getPrice() && current -> getQty() > 0)
            {
                //buy 
                curUser -> deductAmount(current->getPrice());

                //remove from cart
                Product* temp = curUser -> remove();

                //subtract quantity from product
                temp -> subtractQty(1);

                /*
                //if there are no more of this product delete it
                if (temp -> getQty() == 0)
                {
                    for(unsigned long j = 0; j < mProducts.size(); j++)
                    {
                        if(mProducts[j] == temp)
                        {
                            mProducts.erase(mProducts.begin() + j);
                        }
                    }
                    delete temp;
                }
                */
            }
            //cant buy or not enough quantity
            else
            {
                //put it back into the queue
                curUser -> add(curUser -> remove());
            }
            ++i;
        }
        
    }
    else
    {
        std::cout << "Invalid Username" << std::endl;
    }
}

void MyDataStore::deleteMembers()
{
    unsigned long max = mProducts.size();
    for(unsigned long i = 0; i < max ; i++)
    {
        delete mProducts[i];
    }

    max = mUsers.size();
    for(unsigned long i = 0; i < max; i++)
    {
        delete mUsers[i];
    }
}