#include "algostuff.hpp"
using namespace std;

int main()
{
    vector<int> c1{1, 2, 2, 4, 6, 7, 7, 9};
    vector<int> c2{2, 2, 2, 3, 6, 6, 8, 9};

    cout << "c1: ";
    copy(c1.cbegin(), c1.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    cout << "c2: ";
    copy(c2.cbegin(), c2.cend(), ostream_iterator<int>(cout, " "));
    cout << '\n' << endl;

    cout << "merge(): ";
    merge(c1.cbegin(), c1.cend(), c2.cbegin(), c2.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    cout << "set_union(): ";
    set_union(c1.cbegin(), c1.cend(), c2.cbegin(), c2.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    cout << "set_intersection(): ";
    set_intersection(c1.cbegin(), c1.cend(), c2.cbegin(), c2.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    cout << "set_difference(): ";
    set_difference(c1.cbegin(), c1.cend(), c2.cbegin(), c2.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    cout << "set_symmetric_difference(): ";
    set_symmetric_difference(c1.cbegin(), c1.cend(), c2.cbegin(), c2.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
