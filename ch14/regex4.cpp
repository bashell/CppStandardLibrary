#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main()
{
    string pat1 = R"(\\.*index\{([^}]*)\})";
    string pat2 = R"(\\.*index\{(.*)\}\{(.*)\})";
    regex pat(pat1 + "\n" + pat2, regex_constants::egrep | regex_constants::icase);

    string data((istreambuf_iterator<char>(cin)), istreambuf_iterator<char>());

    smatch m;
    auto pos = data.cbegin();
    auto end = data.cend();
    for( ; regex_search(pos, end, m, pat); pos = m.suffix().first) {
        cout << "match: " << m.str() << endl;
        cout << "  val: " << m.str(1) + m.str(2) << endl;
        cout << "  see: " << m.str(3) << endl;
    }

    return 0;
}
