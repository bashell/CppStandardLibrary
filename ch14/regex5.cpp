#include <iostream>
#include <regex>
#include "regexexception.hpp"
using namespace std;

int main()
{
    try {
        regex pat("\\\\.*index\\{([^}]*)\\}", regex_constants::grep | regex_constants::icase);
        // ...
    }
    catch(const regex_error &e) {
        cerr << "regex_error: \n"
             << " what(): " << e.what() << "\n"
             << " code(): " << regexCode(e.code()) << endl;
    }

    return 0;
}
