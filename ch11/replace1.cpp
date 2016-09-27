#include "algostuff.hpp"
using namespace std;

int main()
{
    list<int> coll;
   
    INSERT_ELEMENTS(coll, 2, 7);
    INSERT_ELEMENTS(coll, 4, 9);
    PRINT_ELEMENTS(coll, "coll: ");

    replace(coll.begin(), coll.end(), 6, 42);
    PRINT_ELEMENTS(coll, "coll: ");

    replace_if(coll.begin(), coll.end(),
               [](int elem) {
                  return elem < 5;
               },
               0);
    PRINT_ELEMENTS(coll, "coll: ");

    return 0;
}
