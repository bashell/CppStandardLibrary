#include "algostuff.hpp"
using namespace std;

int main()
{
    deque<int> coll;

    INSERT_ELEMENTS(coll, 3, 7);
    INSERT_ELEMENTS(coll, 2, 6);
    INSERT_ELEMENTS(coll, 1, 5);
    PRINT_ELEMENTS(coll);

    partial_sort(coll.begin(), coll.begin()+5, coll.end());
    PRINT_ELEMENTS(coll);

    partial_sort(coll.begin(), coll.begin()+5, coll.end(), greater<int>());
    PRINT_ELEMENTS(coll);

    partial_sort(coll.begin(), coll.end(), coll.end());
    PRINT_ELEMENTS(coll);

    return 0;
}
