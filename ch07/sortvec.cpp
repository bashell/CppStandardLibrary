#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    vector<string> coll((istream_iterator<string>(cin)), istream_iterator<string>());

    sort(coll.begin(), coll.end());
    
    unique_copy(coll.cbegin(), coll.cend(), ostream_iterator<string>(cout, "\n"));

    return 0;
}
