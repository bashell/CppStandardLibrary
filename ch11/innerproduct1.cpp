#include "algostuff.hpp"
using namespace std;

int main()
{
    list<int> coll;

    INSERT_ELEMENTS(coll, 1, 6);
    PRINT_ELEMENTS(coll);

    // 0 + 1*1 + 2*2 + 3*3 + 4*4 + 5*5 + 6*6
    cout << "inner product: "
         << inner_product(coll.cbegin(), coll.cend(), coll.cbegin(), 0)
         << endl;

    // 0 + 1*6 + 2*5 + 3*4 + 4*3 + 5*2 + 6*1
    cout << "inner reverse product: "
         << inner_product(coll.cbegin(), coll.cend(), coll.crbegin(), 0)
         << endl;

    // 1 * 1+1 * 2+2 * 3+3 * 4+4 * 5+5 * 6+6
    cout << "product of sums: "
         << inner_product(coll.cbegin(), coll.cend(), coll.cbegin(),
                          1,
                          multiplies<int>(),
                          plus<int>())
         << endl;

    return 0;
}
