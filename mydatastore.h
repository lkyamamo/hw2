#include "datastore.h"

class MyDataStore : public DataStore
{
public:
    void addProduct(Product* p);
    void addUser(User* u);
    std::vector<Product*> search(std::vector<std::string>& terms, int type);
    void dump(std::ostream& ofile);
private:
    std::vector<Product*> mProducts;
    std::vector<User*> mUsers;
};

