#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, float> coll;

    coll["VAT1"] = 0.16;
    coll["VAT2"] = 0.07;
    coll["PI"]   = 3.1415;
    coll["an arbitrary number"] = 4983.223;
    coll["Null"] = 0;

    coll["VAT1"] += 0.03;

    cout << "VAT difference: " << coll["VAT1"] - coll["VAT2"] << endl;

    return 0;
}
