#include <iostream>
#include <unordered_set>
#include <string>
#include "hashval.hpp"
#include "print.hpp"
using namespace std;

class Customer {
  public:
    Customer(const string &fn, const string &ln, long n) 
        : fname(fn), lname(ln), no(n) {}

    friend ostream& operator<<(ostream &strm, const Customer &c) {
        return strm << "[" << c.fname << "," << c.lname << "," << c.no << "]";
    }

    friend class CustomerHash;
    friend class CustomerEqual;

  private:
    string fname;
    string lname;
    long no;
};

class CustomerHash {
  public:
    std::size_t operator()(const Customer &c) const {
        return hash_val(c.fname, c.lname, c.no);
    }
};

class CustomerEqual {
  public:
    bool operator()(const Customer &c1, Customer &c2) const {
        return c1.no == c2.no;
    }
};

int main()
{
    unordered_set<Customer, CustomerHash, CustomerEqual> custset;
    custset.insert(Customer("nico", "josuttis", 42));
    PRINT_ELEMENTS(custset);
    
    return 0;
}
