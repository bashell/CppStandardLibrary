#include "algostuff.hpp"
using namespace std;

int main()
{
    vector<int> coll1;
    list<int> coll2;

    INSERT_ELEMENTS(coll1, 1, 9);
    PRINT_ELEMENTS(coll1, "coll1:   ");

    transform(coll1.cbegin(), coll1.cend(),
              coll1.cbegin(),
              coll1.begin(),
              multiplies<int>());
    PRINT_ELEMENTS(coll1, "squared: ");

    transform(coll1.cbegin(), coll1.cend(),
              coll1.crbegin(),
              back_inserter(coll2),
              plus<int>());
    PRINT_ELEMENTS(coll2, "coll2:   ");

    cout << "diff:    ";
    transform(coll1.cbegin(), coll1.cend(), 
              coll2.cbegin(),
              ostream_iterator<int>(cout, " "),
              minus<int>());
    cout << endl;

    return 0;
}
