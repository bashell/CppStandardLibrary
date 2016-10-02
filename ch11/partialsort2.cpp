#include "algostuff.hpp"
using namespace std;

int main()
{
    deque<int> coll1;
    vector<int> coll6(6);    // initialize with 6 elements
    vector<int> coll30(30);  // initialize with 30 elements

    INSERT_ELEMENTS(coll1, 3, 7);
    INSERT_ELEMENTS(coll1, 2, 6);
    INSERT_ELEMENTS(coll1, 1, 5);
    PRINT_ELEMENTS(coll1);

    vector<int>::const_iterator pos6;
    pos6 = partial_sort_copy(coll1.cbegin(), coll1.cend(), coll6.begin(), coll6.end());

    copy(coll6.cbegin(), pos6, ostream_iterator<int>(cout, " "));
    cout << endl;

    vector<int>::const_iterator pos30;
    pos30 = partial_sort_copy(coll1.cbegin(), coll1.cend(), coll30.begin(), coll30.end(), greater<int>());
    
    copy(coll30.cbegin(), pos30, ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
