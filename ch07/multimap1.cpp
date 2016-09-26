#include <iostream>
#include <iomanip>
#include <string>
#include <map>
using namespace std;

int main()
{
    multimap<string, string> dict;

    dict.insert({
                 {"day", "Tag"}, {"strange", "fremd"},
                 {"car", "Auto"}, {"smart", "elegant"},
                 {"trait", "Merkmal"}, {"strange", "seltsam"},
                 {"smart", "raffiniert"}, {"smart", "klug"},
                 {"clever", "raffiniert"}
               });

    cout.setf(ios::left, ios::adjustfield);
    cout << " " << setw(10) << "english " << "german " << endl;
    cout << setfill('-') << setw(20) << "" << setfill(' ') << endl;
    for(const auto &elem : dict) {
        cout << " " << setw(10) << elem.first << elem.second << endl;
    }
    cout << endl;

    string word("smart");
    cout << word << ": " << endl;
    for(auto pos = dict.lower_bound(word); pos != dict.upper_bound(word); ++pos) {
        cout << "    " << pos->second << endl;
    }

    word = ("raffiniert");
    cout << word << ": " << endl;
    for(const auto &elem : dict) {
        if(elem.second == word) {
            cout << "    " << elem.first << endl;
        }
    }

    return 0;
}
