#include "algostuff.hpp"
using namespace std;

int main()
{
    int source[] = {1, 4, 4, 6, 1, 2, 2, 3, 1, 6, 6, 6, 5, 7, 5, 4, 4};
    list<int> coll;

    copy(begin(source), end(source), back_inserter(coll));
    PRINT_ELEMENTS(coll);

    auto pos = unique(coll.begin(), coll.end());
    copy(coll.begin(), pos, ostream_iterator<int>(cout, " "));
    cout << "\n\n";
    
    copy(begin(source), end(source), coll.begin());
    PRINT_ELEMENTS(coll);

    coll.erase(unique(coll.begin(), coll.end(), greater<int>()), coll.end());
    PRINT_ELEMENTS(coll);

    return 0;
}
