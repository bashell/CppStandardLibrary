#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print(int elem) {
    cout << elem << " ";
}

int main()
{
    vector<int> coll;

    for(int i = 1; i <= 9; ++i)
        coll.push_back(i);

    for_each(coll.cbegin(), coll.cend(), print);
    cout << endl;

    return 0;
}
