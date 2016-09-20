#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<char> coll;

    for(char c = 'a'; c <= 'z'; ++c)
        coll.push_back(c);

    for(auto elem : coll)
        cout << elem << ' ';
    cout << endl;

    return 0;
}
