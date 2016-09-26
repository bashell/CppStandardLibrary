#include <iostream>
#include <vector>
#include <iterator>

int main()
{
    int vals[] = {33, 67, -4, 13, 5, 2};

    std::vector<int> v(std::begin(vals), std::end(vals));

    std::copy(std::begin(v), std::end(v), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    return 0;
}
