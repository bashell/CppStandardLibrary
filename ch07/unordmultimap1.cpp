#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>
#include "buckets.hpp"
using namespace std;

int main()
{
    std::unordered_multimap<string, string> dict = {
            {"day", "Tag"},
            {"strange", "fremd"},
            {"car", "Auto"},
            {"smart", "elegant"},
            {"trait", "Merkmal"},
            {"strange", "seltsam"}
    };
    printHashTableState(dict);

    dict.insert({{"smart", "raffiniert"},
                 {"smart", "klug"},
                 {"clever", "raffiniert"}
                 });
    printHashTableState(dict);

    dict.max_load_factor(0.7);
    printHashTableState(dict);

    return 0;
}
