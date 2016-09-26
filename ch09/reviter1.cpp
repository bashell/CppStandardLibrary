#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void print(int elem) {
    cout << elem << " ";
}

int main()
{
    list<int> coll = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for_each(coll.begin(), coll.end(), print);
    cout << endl;
    
    for_each(coll.rbegin(), coll.rend(), print);
    cout << endl;

    return 0;
}
