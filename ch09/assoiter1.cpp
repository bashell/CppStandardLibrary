#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <vector>
#include "print.hpp"
#include "assoiter.hpp"

int main()
{
    std::unordered_set<int> coll;

    asso_insert_iterator<decltype(coll)> iter(coll);

    *iter = 1;
    iter++;
    *iter = 2;
    iter++;
    *iter = 3;
    PRINT_ELEMENTS(coll);
    
    asso_inserter(coll) = 44;
    asso_inserter(coll) = 55;
    PRINT_ELEMENTS(coll);

    std::vector<int> vals = {33, 67, -4, 13, 5, 2};
    std::copy(vals.begin(), vals.end(), asso_inserter(coll));
    PRINT_ELEMENTS(coll);

    return 0;
}
