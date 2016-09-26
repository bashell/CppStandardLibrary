#include <iostream>
#include <string>
#include <locale>
#include <algorithm>
using namespace std;

char myToupper(char c) {
    std::locale loc;
    return std::use_facet<std::ctype<char>>(loc).toupper(c);
}

int main()
{
    string s("Internationalization");
    string sub("Nation");

    string::iterator pos;
    pos = search(s.begin(), s.end(),
                 sub.begin(), sub.end(),
                 [](char c1, char c2) {
                    return myToupper(c1) == myToupper(c2);
                 });
    if(pos != s.end()) {
        cout << "\"" << sub << "\" is part of \"" << s << "\"" << endl;
    }

    return 0;
}
