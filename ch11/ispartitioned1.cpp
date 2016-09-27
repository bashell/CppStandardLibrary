#include "algostuff.hpp"
using namespace std;

int main()
{
    vector<int> coll{5, 3, 9, 1, 3, 4, 8, 2, 6};
    PRINT_ELEMENTS(coll);

    auto isOdd = [](int elem) { return elem%2 == 1; };

    if(is_partitioned(coll.cbegin(), coll.cend(), isOdd)) {
        cout << "coll is partitioned" << endl;

        auto pos = partition_point(coll.cbegin(), coll.cend(), isOdd);
        cout << "first even element: " << *pos << endl;
    } else {
        cout << "coll is not partitioned" << endl;
    }
    
    return 0;
}
