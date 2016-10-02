#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <locale>
using namespace std;

int main()
{
    string input;

    // don't skip leading whitespaces
    cin.unsetf(ios::skipws);

    const locale& loc(cin.getloc());
    unique_copy(istream_iterator<char>(cin), istream_iterator<char>(),
                back_inserter(input),
                [=](char c1, char c2) {
                    return isspace(c1, loc) && isspace(c2, loc);
                });
    cout << input;

    return 0;
}
