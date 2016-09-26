#include <list>
#include <algorithm>
#include <iterator>
#include "print.hpp"
using namespace std;

int main()
{
    list<int> coll;
   
    for(int i = 1; i <= 9; ++i)
        coll.push_back(i);
    PRINT_ELEMENTS(coll);

    iter_swap(coll.begin(), next(coll.begin()));
    PRINT_ELEMENTS(coll);

    iter_swap(coll.begin(), prev(coll.end()));
    PRINT_ELEMENTS(coll);
    
    return 0;
}
