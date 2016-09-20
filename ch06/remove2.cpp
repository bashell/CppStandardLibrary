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

    copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    // end为"被修改集合"经过元素移出动作后的新的逻辑终点
    list<int>::iterator end = remove(coll.begin(), coll.end(), 3);

    copy(coll.begin(), end, ostream_iterator<int>(cout, " "));
    cout << endl;

    // distance()返回两个迭代器之间的距离
    cout << "number of removed elements: " << distance(end, coll.end()) << endl;

    coll.erase(end, coll.end());

    copy(coll.cbegin(), coll.cend(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
