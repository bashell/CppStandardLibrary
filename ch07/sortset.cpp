#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    set<string> coll((istream_iterator<string>(cin)), istream_iterator<string>());

    copy(coll.cbegin(), coll.cend(), ostream_iterator<string>(cout, "\n"));

    return 0;
}
