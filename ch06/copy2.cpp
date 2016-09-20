#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <deque>
#include <set>
using namespace std;

int main()
{
    list<int> coll1{1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<int> coll2;
    copy(coll1.cbegin(), coll1.cend(), back_inserter(coll2));
    cout << "coll2: ";
    for(auto elem : coll2)
        cout << elem << " ";
    cout << endl;

    deque<int> coll3;
    copy(coll1.cbegin(), coll1.cend(), front_inserter(coll3));
    cout << "coll3: ";
    for(auto elem : coll3)
        cout << elem << " ";
    cout << endl;

    set<int> coll4;
    copy(coll1.cbegin(), coll1.cend(), inserter(coll4, coll4.begin()));
    cout << "coll4: ";
    for(auto elem : coll4)
        cout << elem << " ";
    cout << endl;

    return 0;
}
