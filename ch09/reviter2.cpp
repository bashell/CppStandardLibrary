#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    vector<int> coll = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<int>::const_iterator pos;

    pos = find(coll.cbegin(), coll.cend(), 5);

    cout << "pos: " << *pos << endl;  // print 5

    vector<int>::const_reverse_iterator rpos(pos);

    cout << "rpos: " << *rpos << endl;  // print 4

    return 0;
}
