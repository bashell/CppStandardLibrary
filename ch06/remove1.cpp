#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
using namespace std;

int main()
{
    list<int> coll;

    for(int i = 1; i <= 6; ++i) {
        coll.push_front(i);
        coll.push_back(i);
    }

    cout << "pre:  ";
    copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    remove(coll.begin(), coll.end(), 3);

    cout << "post: ";
    copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
