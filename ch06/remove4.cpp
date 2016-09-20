#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    list<int> coll;

    for(int i = 1; i <= 6; ++i) {
        coll.push_front(i);
        coll.push_back(i);
    }
    
    copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    // poor performance
    coll.erase(remove(coll.begin(), coll.end(), 3), coll.end());
    
    copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    // good performance
    coll.remove(4);
    
    copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
