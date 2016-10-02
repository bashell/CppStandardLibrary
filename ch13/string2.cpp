#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    const string delims(" \t,.;");
    string line;

    while(getline(cin, line)) {
        string::size_type begIdx, endIdx;

        // search beginning of a wrod found
        begIdx = line.find_first_not_of(delims);

        while(begIdx != string::npos) {
            // search end of the actual word
            endIdx = line.find_first_of(delims, begIdx);
            if(endIdx == string::npos) 
                endIdx = line.length();

            // print characters in reverse order
            for(int i = endIdx-1; i >= static_cast<int>(begIdx); --i)
                cout << line[i];
            cout << ' ';

            // search beginning of the next word
            begIdx = line.find_first_not_of(delims, endIdx);
        }
        cout << endl;
    }
    return 0;
}
