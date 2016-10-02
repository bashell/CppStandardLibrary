#include "algostuff.hpp"
using namespace std;

int main()
{
    vector<int> coll{1, 6, 33, 7, 22, 4, 11, 33, 2, 7, 0, 42, 5};
    PRINT_ELEMENTS(coll, "coll: ");

    vector<int> evenColl;
    vector<int> oddColl;

    partition_copy(coll.cbegin(), coll.cend(),
                   back_inserter(evenColl),
                   back_inserter(oddColl),
                   [](int elem) {
                       return elem % 2 == 0;
                   });

    PRINT_ELEMENTS(evenColl, "evenColl: ");
    PRINT_ELEMENTS(oddColl, "oddColl:  ");

    return 0;
}
