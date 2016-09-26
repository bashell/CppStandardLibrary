#include <algorithm>
#include <vector>
#include <iterator>
#include "print.hpp"
using namespace std;

int main() {
    vector<int> coll;
    back_insert_iterator<vector<int>> iter(coll);

    *iter = 1;
    iter++;
    *iter = 2;
    iter++;
    *iter = 3;
    PRINT_ELEMENTS(coll);

    back_inserter(coll) = 44;
    back_inserter(coll) = 55;
    PRINT_ELEMENTS(coll);

    coll.reserve(2 * coll.size());
    copy(coll.begin(), coll.end(), back_inserter(coll));
    PRINT_ELEMENTS(coll);

    return 0;
}
