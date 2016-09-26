#include <iostream>
#include <iterator>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    istream_iterator<string> cinPos(cin);
    ostream_iterator<string> coutPos(cout, " ");

    while(cinPos != istream_iterator<string>()) {
        // ignore the following two strings
        advance(cinPos, 2);

        // read and write the third string
        if(cinPos != istream_iterator<string>()) {
            *coutPos++ = *cinPos++;
        }
    }
    cout << endl;

    return 0;
}
