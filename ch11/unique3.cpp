#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

bool bothSpaces(char elem1, char elem2) {
    return elem1 == ' ' && elem2 == ' ';
}

int main()
{
    cin.unsetf(ios::skipws);

    // compressing spaces
    unique_copy(istream_iterator<char>(cin),
                istream_iterator<char>(),
                ostream_iterator<char>(cout),
                bothSpaces);

    return 0;
}
