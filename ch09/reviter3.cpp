#include <iostream>
#include <iterator>
#include <deque>
#include <algorithm>
using namespace std;

void print(int elem) {
    cout << elem << " ";
}

int main()
{
    deque<int> coll{1, 2, 3, 4, 5, 6, 7, 8, 9};

    deque<int>::const_iterator pos1;
    pos1 = find(coll.cbegin(), coll.cend(), 2);

    deque<int>::const_iterator pos2;
    pos2 = find(coll.cbegin(), coll.cend(), 7);

    for_each(pos1, pos2, print);
    cout << endl;

    deque<int>::const_reverse_iterator rpos1(pos1);
    deque<int>::const_reverse_iterator rpos2(pos2);

    for_each(rpos2, rpos1, print);
    cout << endl;

    return 0;
}
