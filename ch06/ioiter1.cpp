#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    vector<string> coll;

    copy(istream_iterator<string>(cin), 
         istream_iterator<string>(),
         back_inserter(coll));

    sort(coll.begin(), coll.end());

    unique_copy(coll.cbegin(), coll.cend(), ostream_iterator<string>(cout, "\n"));  // 去重拷贝, \n作为分隔符

    return 0;
}
