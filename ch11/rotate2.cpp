#include "algostuff.hpp"
using namespace std;

int main()
{
    set<int> coll;
    
    INSERT_ELEMENTS(coll, 1, 9);
    PRINT_ELEMENTS(coll);

    set<int>::const_iterator pos = next(coll.cbegin());
    rotate_copy(coll.cbegin(), pos, coll.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    pos = coll.cend();
    advance(pos, -2);
    rotate_copy(coll.cbegin(), pos, coll.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    rotate_copy(coll.cbegin(), coll.find(4), coll.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
