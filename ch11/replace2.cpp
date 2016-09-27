#include "algostuff.hpp"
using namespace std;
using namespace std::placeholders;

int main()
{
    list<int> coll;

    INSERT_ELEMENTS(coll, 2, 6);
    INSERT_ELEMENTS(coll, 4, 9);
    PRINT_ELEMENTS(coll);

    replace_copy(coll.cbegin(), coll.cend(),
                 ostream_iterator<int>(cout, " "),
                 5,
                 55);
    cout << endl;

    replace_copy_if(coll.cbegin(), coll.cend(),
                    ostream_iterator<int>(cout, " "),
                    bind(less<int>(), _1, 5),
                    42);
    cout << endl;

    replace_copy_if(coll.cbegin(), coll.cend(),
                    ostream_iterator<int>(cout, " "),
                    [](int elem) { return elem%2 == 1; },
                    0);
    cout << endl;

    return 0;
}
