#include "algostuff.hpp"
using namespace std;

void printCollection(const list<int> &l) {
    PRINT_ELEMENTS(l);
}

bool lessForCollection(const list<int> &l1, const list<int> &l2) {
    return lexicographical_compare(l1.cbegin(), l1.cend(),
                                   l2.cbegin(), l2.cend());
}

int main()
{
    list<int> c1, c2, c3, c4;

    INSERT_ELEMENTS(c1, 1, 5);
    c4 = c3 = c2 = c1;

    c1.push_back(7);
    c3.push_back(2);
    c3.push_back(0);
    c4.push_back(2);

    vector<list<int>> cc;
    cc.insert(cc.begin(), {c1, c2, c3, c4, c3, c1, c4, c2});

    for_each(cc.cbegin(), cc.cend(), printCollection);
    cout << endl;

    sort(cc.begin(), cc.end(), lessForCollection);

    for_each(cc.cbegin(), cc.cend(), printCollection);

    return 0;
}
