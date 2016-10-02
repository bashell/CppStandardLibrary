#include "algostuff.hpp"
using namespace std;

int main()
{
    vector<int> coll;

    INSERT_ELEMENTS(coll, 1, 9);
    PRINT_ELEMENTS(coll, "coll: ");

    reverse(coll.begin(), coll.end());
    PRINT_ELEMENTS(coll, "coll: ");

    reverse(coll.begin()+1, coll.end()-1);
    PRINT_ELEMENTS(coll, "coll: ");

    reverse_copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
