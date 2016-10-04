#include <iostream>
#include <string>
#include <regex>
#include <algorithm>
using namespace std;

int main()
{
    string data = "<person>\n"
                  " <first>Nico</first>\n"
                  " <last>Josuttis</last>\n"
                  "</person>\n";

    regex reg("<(.*)>(.*)</(\\1)>");

    sregex_iterator pos(data.cbegin(), data.cend(), reg);
    sregex_iterator end;
    for( ; pos != end; ++pos) {
        cout << "match:  " << pos->str() << endl;
        cout << " tag:   " << pos->str(1) << endl;
        cout << " value: " << pos->str(2) << endl;
    }
    cout << endl;

    sregex_iterator beg(data.cbegin(), data.cend(), reg);
    for_each(beg, end,
             [](const smatch &m) {
                 cout << "match:  " << m.str() << endl;
                 cout << " tag:   " << m.str(1) << endl;
                 cout << " value: " << m.str(2) << endl;
             });

    return 0;
}
