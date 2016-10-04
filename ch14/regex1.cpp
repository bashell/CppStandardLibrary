#include <iostream>
#include <regex>
using namespace std;

void out(bool b) {
    cout << (b ? "found" : "not found") << endl;
}

int main()
{
    regex reg1("<.*>.*</.*>");
    bool found = regex_match("<tag>value</tag>", reg1);
    out(found);

    regex reg2("<(.*)>.*</\\1>");
    found = regex_match("<tag>value</tag>", reg2);
    out(found);

    regex reg3("<\\(.*\\)>.*</\\1>", regex_constants::grep);
    found = regex_match("<tag>value</tag>", reg3);
    out(found);

    found = regex_match("<tag>value</tag>", regex("<(.*)>.*</\\1>"));
    out(found);
    cout << endl;

    found = regex_match("XML tag: <tag>value</tag>", regex("<(.*)>.*</\\1>"));
    out(found);

    found = regex_match("XML tag: <tag>value</tag>", regex(".*<(.*)>.*</\\1>.*"));
    out(found);

    found = regex_search("XML tag: <tag>value</tag>", regex("<(.*)>.*</\\1>"));
    out(found);

    found = regex_search("XML tag: <tag>value</tag>", regex(".*<(.*)>.*</\\1>.*"));
    out(found);

    return 0;
}
