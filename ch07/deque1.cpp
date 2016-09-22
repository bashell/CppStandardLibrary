#include <iostream>
#include <string>
#include <deque>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    deque<string> coll;

    coll.assign(3, string("string"));
    coll.push_back("list string");
    coll.push_front("first string");

    copy(coll.cbegin(), coll.cend(), ostream_iterator<string>(cout, "\n"));
    cout << endl;

    coll.pop_front();
    coll.pop_back();

    for(unsigned i = 1; i < coll.size(); ++i)
        coll[i] = "another " + coll[i];

    coll.resize(4, "resized string");
    
    copy(coll.cbegin(), coll.cend(), ostream_iterator<string>(cout, "\n"));

    return 0;
}
