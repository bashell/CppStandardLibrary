#include <iostream>
#include <array>
#include <string>
using namespace std;

int main()
{
    array<string, 5> coll = {"hello", "world"};  // 元素个数为array类型的一部分

    for(int i = 0; i < coll.size(); ++i)
        cout << i << ": " << coll[i] << endl;

    return 0;
}
