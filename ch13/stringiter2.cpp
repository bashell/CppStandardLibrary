#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    const string hello("Hello, how are you?");

    string s(hello.cbegin(), hello.cend());

    for(char c : s) 
        cout << c;
    cout << endl;

    reverse(s.begin(), s.end());
    cout << "reverse:       " << s << endl;

    sort(s.begin(), s.end());
    cout << "sorted:        " << s << endl;

    s.erase(unique(s.begin(), s.end()), s.end());
    cout << "no duplicates: " << s << endl;
            
    return 0;
}
