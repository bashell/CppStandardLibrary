#include "algostuff.hpp"
using namespace std;

int main()
{
    deque<int> coll;

    INSERT_ELEMENTS(coll, 1, 9);
    INSERT_ELEMENTS(coll, 1, 9);
    PRINT_ELEMENTS(coll, "on entry: ");

    sort(coll.begin(), coll.end());
    PRINT_ELEMENTS(coll, "sorted:   ");

    sort(coll.begin(), coll.end(), greater<int>());
    PRINT_ELEMENTS(coll, "sorted >: ");

    return 0;
}
