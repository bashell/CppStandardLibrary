#include <list>
#include <iterator>
#include <algorithm>
#include "print.hpp"
using namespace std;

int main()
{
    list<int> coll;
    front_insert_iterator<list<int>> iter(coll);
    
    *iter = 1;
    iter++;
    *iter = 2;
    iter++;
    *iter = 3;
    PRINT_ELEMENTS(coll);

    front_inserter(coll) = 44;
    front_inserter(coll) = 55;
    PRINT_ELEMENTS(coll);

    copy(coll.begin(), coll.end(), front_inserter(coll));
    PRINT_ELEMENTS(coll);

    return 0;
}
