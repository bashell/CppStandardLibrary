#include <iostream>
#include <iterator>
using namespace std;

int main()
{
    istream_iterator<int> intReader(cin);
    istream_iterator<int> intReaderEOF;  // end of stream
    
    while(intReader != intReaderEOF) {
        cout << "once:       " << *intReader << endl;
        cout << "once again: " << *intReader << endl;
        ++intReader;
    }

    return 0;
}
