#include <iostream>
#include <bitset>
using namespace std;

int main() 
{
    enum Color { red, yellow, green, blue, white, black, //...,,
                 numColors };
    
    // bitset for all bits/colors
    bitset<numColors> usedColors;

    // set bits for two colors
    usedColors.set(red);
    usedColors.set(blue);

    cout << "bitfield of used colors:   " << usedColors << endl;
    cout << "number   of used colors:   " << usedColors.count() << endl;
    cout << "bitfield of unused colors: " << ~usedColors << endl;

    // if any color is used
    if(usedColors.any()) {
        // loop over all colors
        for(int c = 0; c < numColors; ++c) {
            // if the actual color is used
            if(usedColors[(Color)c]) {
                cout << c << endl;
            }
        }
    }

    return 0;
}
